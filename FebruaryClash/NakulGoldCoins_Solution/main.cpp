#include <bits/stdc++.h>
using namespace std;
int  a[1000001]={0};
int prime[1000005];
int p=1;
vector<int> x;
int rangeCount(int l,int r)
 {
 	if(l>r)
 	  return 0;
  vector<int>::iterator up,low;
  up=upper_bound(x.begin(),x.end(),r);
  low=lower_bound(x.begin(),x.end(),l);
  return (int)(up-low);
 }
void generate(int y)
    {int i,j;
     prime[0]=2;
	 for(i=3;i*i<=y;i+=2)
        {if(a[i])
          continue;
         prime[p++]=i;
		for(j=i*i;j<=y;j+=2*i)
           {a[j]=1;
           }
        }
        for(i;i<=y;i+=2)
          if(!a[i])
            prime[p++]=i;

    }
  int main()
    {
    	freopen("in7.txt","r",stdin);
    	freopen("out7.txt","w",stdout);

     generate(1000000);
     int t,l,r,i,j,lower,upper;
     x=vector<int> (prime,prime+p);
     cin>>t;
     while(t--)
      {
      	cin>>l>>r;
      	assert(l<=r && l>=1 && r>=1 && l<=100000000 && r<=100000000);
      	long long count=0;
      	for(i=0;i<p;i++)
      	 { lower=l/prime[i];
      	   if(l%prime[i])
      	     lower++;
      	    lower=max(lower,prime[i]+1);
      	    upper=r/prime[i];
      	 	count+=rangeCount(lower,upper);
		 }
      	cout<<count<<endl;
      }

 	}
