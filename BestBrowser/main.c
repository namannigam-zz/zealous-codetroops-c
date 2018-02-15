#include <stdio.h>
#include <stdlib.h>
#define MAX 200
int smartbrowser(char*,int);
int main()
{
    int tc,len,cut_len;
    char str[MAX];
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%s",&str);
        len=strlen(str);
        short_len=smartbrowser(str,len);
        printf("%d/%d\n",short_len,len);
    }
}

int smartbrowser(char *str,int len)
{
    int length=len-4; //for www.
    int i;
    for(i=4;i<len-4;i++) //for .com
    {
        if(str[i] == 'a' || str[i] =='e' || str[i] == 'i' || str[i] =='o' || str[i] == 'u')
            length--;
    }
return length;
}
