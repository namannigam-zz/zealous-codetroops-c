#include <stdio.h>
#include <string.h>
void MinimumCost(int,int[][100]);
int min(int,int);
static int adj_cost[100][100]={{0}};
struct station_graph
{
   char st_nam[50];
   int st_num;
}  station[100];

int main()
{
   int N,M,noq,in_cost;
   int i,j,k,l,m,n,res;
   int src,dest,qsrc,qdest;
   char src_st[50],dest_st[50];
   char qsource[20],qsink[20];

   scanf("%d %d",&N,&M);

   for(l=1;l<=N;l++)
      {
          for(m=1;m<=N;m++)
        {
            if(adj_cost[l][m]==0 && l!=m)
                adj_cost[l][m]=32766;
        }
      }

   for(i=1;i<=N;i++)
       {
           scanf("%s",station[i].st_nam);
           station[i].st_num=i;
       }

   for(j=1;j<=M;j++)
   {
       scanf("%s",src_st);
       scanf("%s",dest_st);
       scanf("%d",&in_cost);
       for(k=1;k<=N;k++)
       {
           if(strcmp(src_st,station[k].st_nam)==0)
            src=station[k].st_num;
           if(strcmp(dest_st,station[k].st_nam)==0)
            dest=station[k].st_num;
       }
       adj_cost[src][dest]=in_cost;
       adj_cost[dest][src]=in_cost;
   }

   MinimumCost(N,adj_cost);

   scanf("%d",&noq);
   for(i=1;i<=noq;i++)
   {
       scanf("%s",qsource);
       scanf("%s",qsink);
       for(n=1;n<=N;n++)
       {
           if(strcmp(qsource,station[n].st_nam)==0)
            qsrc=station[n].st_num;
           if(strcmp(qsink,station[n].st_nam)==0)
            qdest=station[n].st_num;
       }
       res = adj_cost[qsrc][qdest];
       printf("%d\n",res);
   }
return 0;
}

void MinimumCost(int N,int adj_cost[100][100])
{
    int k,l,m;
    for(k=1;k<=N;k++)
        for(l=1;l<=N;l++)
            for(m=1;m<=N;m++)
                 adj_cost[l][m]= min(adj_cost[l][m],adj_cost[l][k]+adj_cost[k][m]);
}

int min(int a,int b)
{
if(a<b)
	return a;
else
	return b;
}
