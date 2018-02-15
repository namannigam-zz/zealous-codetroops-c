#define WORDCNT 20
#define WORDLEN 20
int ChainingStrings(char arr[WORDCNT][WORDLEN],int strcount)
{
    char *str1;
    int i;
    char first[WORDCNT],last[WORDCNT];
    for(i=0;i<=strcount;i++)
    {
        str1=&arr[i];
        first[i]=*str1;
        while(*str1!='\0')
            str1++;
        last[i]=*(str1-1);
    }
    for(i=1;i<=strcount;i++)
        printf("%c ---- %c\n",first[i],last[i]);

    if(areAnagrams(first,last))
    {
        return 1;
    }
    else return 0;

}
