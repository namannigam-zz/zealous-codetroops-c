#include<iostream>
#include<cstdio>

using namespace std;

static int A[1000][1000];
int main()
{
  int N,M,Q,X,x,y,i,j,k;
  cin>>N>>M;
  for(j=0;j<N;j++)
    for(k=0;k<M;k++)
        cin>> A[j][k];
  cin>>Q;
  for(i=0;i<Q;i++)
  {
    cin >> X;
    x=0;y=M-1;
    while((x<N)&&(y>=0)&&(A[x][y]!=X))
    {
      if(A[x][y]>X)
        y--;
      else if(A[x][y]<X)
        x++;
    }
    if(y<0||x>=N)
      cout<<"-1 -1\n";
    else
      cout<<x<<" "<<y<<"\n";
  }
  return 0;
}
