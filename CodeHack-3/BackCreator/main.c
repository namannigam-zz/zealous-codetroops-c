#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000
//int LCSubStr(char[],char[],int,int);
//int max(int,int);
int changes(char[],char[],int,int);
int main()
{
    int T,K;
    int i,lcs_len,res;
    int len_dup,len_orig;
    char orig_dna[MAX];
    char dup_dna[MAX];
    scanf("%d",&T);
    while(T--)
    {
    	scanf("%s",orig_dna);
    	scanf("%s",dup_dna);
        len_dup=strlen(dup_dna);
        len_orig=strlen(orig_dna);
        res=changes(orig_dna,dup_dna,len_orig,len_dup);
        printf("%d\n",res);
    }
    return 0;
}
int changes(char *orig,char *dup,int x,int y)
{
    int i,j;
    int count=0;
    while(orig++)
    {
        if(orig[i]==dup[j])

    }
    return count;
}
/*int LCSubStr(char *X, char *Y, int m, int n)
{
    int LCSuff[m+1][n+1];
    int result = 0;
    int i,j;
    for (i=0; i<=m; i++)
    {
        for (j=0; j<=n; j++)
        {
            if (i == 0 || j == 0)
                LCSuff[i][j] = 0;

            else if (X[i-1] == Y[j-1])
            {
                LCSuff[i][j] = LCSuff[i-1][j-1] + 1;
                result = max(result,LCSuff[i][j]);
            }
            else LCSuff[i][j] = 0;
        }
    }
    return result;
}

int max(int a, int b)
{   return (a > b)? a : b; }
*/
