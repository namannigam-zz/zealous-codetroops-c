#include <stdio.h>
#define MAX 16385
int lcmofcandies(int [],int,int);
int gcd(int,int);
int lcm(int,int);

int main()
{
    int T,N,noq;
    int i,j,k,l,op,a,b,res;
    int candies[MAX];
    scanf("%d",&T);
    while(T--)
    {
    	scanf("%d",&N);
    	for(i=1;i<=N;i++)
	    	scanf("%d",&candies[i]);
    }

    scanf("%d",&noq);
    for(j=1;j<=noq;j++)
    {
    	scanf("%d",&op);
    	scanf("%d",&a);
    	scanf("%d",&b);
  	    if(op)
	    {
	       res=lcmofall(candies,a,b);
	 	   printf("%d\n",res);
	    }
	    else
	    	candies[a]=b;
    }
}



int lcmofall(int candies[MAX],int start, int end)
{
    if ((end-start)==1)
    	return lcm(candies[start],candies[end]);
    else
    	return (lcm(candies[start],lcmofall(candies,start+1,end)));
}
int lcm(int a, int b)
{
    return ((a*b)/gcd(a,b));
}

int gcd(int a,int b)
{
	if (a<b) return gcd(b,a);
    if (a%b==0) return b;
    else return gcd(b, a%b);
}
