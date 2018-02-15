`  #include<stdio.h>
int main ()
{
       //Enter your code here.Read input from STDIN.Print output to STDOUT/
       int num,row=1,col,space,x;
       for(num=5;num>=1;num--)
       {
           for (space=row;space>1;space--)
                printf(" ");
           for(col=1;col<=num;col++)
                printf("*");
           for(col=1;col<num;col++)
                printf("*");


       row++;
       printf("\n");
       }
return 0;
}
