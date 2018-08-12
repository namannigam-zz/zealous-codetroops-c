#include <stdio.h>
#include <stdlib.h>

int main()
{
	long int T;
	long int N;

    scanf("%ld",&T);
	while(T--)
	{
		long int sum=0;
        long int first=1;
        long int second=1;
        long int third=0;
		scanf("%ld",&N);
        while(third<N)
		    {
		        if(third%2==0)
		                sum+=third;
		        third=first+second;
		        first=second;
		        second=third;

		    }
    	printf("%ld\n",sum);
	}
    return 0;
}
