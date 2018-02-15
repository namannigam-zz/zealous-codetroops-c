#include <stdlib.h>
#define MAX 50
struct node
{   int data;
    node *next;
}*p = NULL, *top = NULL, *save = NULL, *ptr;

void push(char x)
{
    p = new node;
    p->data = x;
    p->next = NULL;
    if (top == NULL)
        top = p;
    else
    {
        save = top;
        top = p;
        p->next = save;
    }
}
char pop()
{
    if (top == NULL)
        printf("Underflow!!");
    else
    {
        ptr = top;
        top = top->next;
        return(ptr->data);
        free(ptr);
    }
}

int main()
{
    char str[MAX];
    char a, b;
    printf("Enter the expression.\n");
    gets(str);
    int i;
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == '(')
           {
               push(str[i]);
               Opencount++;
           }
           if (str[i] == ')')
           {
               Closecount++;
               TotalCount=Opencount+Closecount;
               while (CloseCount)
               {
                   if(str[i]=='(')
                        pop();
                   --;

           }
    }

    getch();
}

void swap(char a,char b)
{
    char tmp;
    tmp=a;
    a=b;
    b=tmp;


}


