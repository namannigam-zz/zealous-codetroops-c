#include <stdio.h>
#include <stdlib.h>
#define MAX 105
int permute(int[MAX],int,int);
int main()
{
    long int T;
    int N,maxsum,i,j,arr[MAX];
    int res=0;
    scanf("%ld",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&N);
        for(j=0;j<N;j++)
            arr[j]=j+1;
        res=permute(arr,0,N-1);
        printf("%d\n",res);
    }

    return 0;
}

int permute(int arr[MAX],int i,int n)
{
   int j,sum,rec_sum,max_sum=0;
   if (i == n)
     {
         sum=PermuteSum(arr,n);
         return sum;
     }
   else
   {
    for (j = i; j <= n; j++)
       {
          swap(arr[i],arr[j]);
          rec_sum=permute(arr,i+1,n);
          if(max_sum<rec_sum)
            max_sum=rec_sum;
          swap(arr[i],arr[j]);
       }
       return max_sum;
   }
}


void swap (int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int PermuteSum(int arr[MAX],int N)
{
  int i,diff,res=0;
  if(N==0)
    return 1;
  for(i=0;i<N;i++)
  {
      diff=arr[i+1]-arr[i];
      res+=diff;
  }
  return res;
}
