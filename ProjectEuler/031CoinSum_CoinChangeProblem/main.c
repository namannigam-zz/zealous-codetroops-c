#include <stdio.h>
#include <stdlib.h>
int countcoins(int[],int,int);
int main()
{
    int coin_var[]={1,2,5,10,20,50,100,200};
    int tot_elem = sizeof(coin_var)/sizeof(coin_var[0]);
    int val_to_get;
    scanf("%d",&val_to_get);
    int res=countcoins(coin_var,tot_elem,val_to_get);
    printf("%d",res);
    return 0;
}

int countcoins(int arr[],int m,int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;
    if (m <=0 && n >= 1)
        return 0;
    return (countcoins(arr,m - 1,n) + countcoins(arr,m,n-arr[m-1]));
}

//Alternate way

int count( int S[], int m, int n )
{
    // table[i] will be storing the number of solutions for
    // value i. We need n+1 rows as the table is consturcted
    // in bottom up manner using the base case (n = 0)
    int table[n+1];

    // Initialize all table values as 0
    memset(table, 0, sizeof(table));

    // Base case (If given value is 0)
    table[0] = 1;

    // Pick all coins one by one and update the table[] values
    // after the index greater than or equal to the value of the
    // picked coin
    for(int i=0; i<m; i++)
        for(int j=S[i]; j<=n; j++)
            table[j] += table[j-S[i]];

    return table[n];
}

