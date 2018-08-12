#include <stdio.h>
#include <string.h>
#define MAX 100
void printOutput(char [],int);
int main()
{
   int tc,len;
   char N[MAX];
   scanf("%d",&tc);
   while(tc--)
   {
       scanf("%s",N);
       len=strlen(N);
       printOutput(N,len);
   }
    return 0;
}

void printOutput(char *arr,int length)
{
    int i,j,k;
        switch(*arr)
        {
        case '6':
        case '7':
        case '8':
        case '9':
            for(i=0;i<length+1;i++)
                printf("3");
            printf("\n");
            break;
        case '0':
        case '1':
        case '2':
            for(j=0;j<length;j++)
                printf("3");
            printf("\n");
            break;
        case '4':
            printf("5");
            for(k=0;k<length-1;k++)
                printf("3");
            printf("\n");
            break;

  //Special Case for 3

        case '3':
            if((*(arr+1)) == NULL)
                printf("5\n");
            else
            {
                switch(*(arr+1))
                {
                case '0':
                case '1':
                case '2':
                case '3':
                case '4':
                    printf("3");
                    printOutput(arr+1,length-1);
                    break;
                case '6':
                case '7':
                case '8':
                case '9':
                    printf("5");
                    printOutput(arr+1,length-2);
                    break;
                case '5':
                    printf("3");
                    printOutput(arr+1,length-1);
                    break;
                }
            }
            break;

//Special Case for 5

        case '5':

            if((*(arr+1)) == NULL)
                printf("3\n");
            else
            {
                switch(*(arr+1))
                {
                case '0':
                case '1':
                case '2':
                case '3':
                case '4':
                    printf("5");
                    printOutput(arr+1,length-1);
                    break;

                case '6':
                case '7':
                case '8':
                case '9':
                    printOutput(arr+1,length);
                    break;

               case '5':
               		printf("5");
                    printOutput(arr+1,length);
                    break;

                }
            }

            break;
        }
}
