#include<stdio.h>
int main()
{
  int a[2][2],b[2][2],c[2][2],i,j,k,sum=0;
      printf("\nEnter the First matrix->");
      for(i=0;i<2;i++)
      for(j=0;j<2;j++)
      scanf("%d",&a[i][j]);
      printf("\nEnter the Second matrix->");
      for(i=0;i<2;i++)
      for(j=0;j<2;j++)
      scanf("%d",&b[i][j]);

      for(i=0;i<2;i++)
      for(j=0;j<2;j++)
           c[i][j]=0;
      for(i=0;i<2;i++)
      {
      for(j=0;j<2;j++)
      {
           sum=0;
           for(k=0;k<2;k++)
               sum=sum+a[i][k]*b[k][j];
           c[i][j]=sum;
      }
      }
  printf("\nThe multiplication of two matrix is\n");
  for(i=0;i<2;i++)
  {
      printf("\n");
      for(j=0;j<2;j++)
      {
           printf("%d\t",c[i][j]);
      }
  }
  return 0;
}

