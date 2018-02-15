#include <stdio.h>
#include <string.h>
long int min(long int,long int);

char s[1000004];
int main()
{
 int t;
 scanf("%d",&t);
 while(t--)
 {
 	scanf("%s",s);
	int i;
	int len=strlen(s);
	long int one=0,two=0;
	long int cnt1=0,cnt2=0;
	for(i=0;i<len;i++)
	{
	    if(s[i]=='O')
	    {
	        one+=cnt2;
	        ++cnt1;
	    }
	    else
	    {
	        two+=cnt1;
	        ++cnt2;
	    }
	}
	printf("%ld\n",min(one,two));
  }

 //printf("Hello World!\n");
    return 0;
}

long int min(long int x,long int y)
{
return ((x<y)? x:y);
}
