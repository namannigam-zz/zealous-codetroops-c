# include <stdio.h>
#define MAX 2
void main()
{
  int mata[MAX][MAX], matb[MAX][MAX], matc[MAX][MAX] ;
  int i, j, k;

    printf("\nEnter the elements of first matrix : \n\n") ;
    for(i = 0 ; i < 2 ; i++)
      for(j = 0 ; j < 2 ; j++)
        scanf("%d", &mata[i][j]) ;

    printf("\nEnter the elements of second matrix : \n\n") ;
    for(i = 0 ; i < 2; i++)
      for(j = 0 ; j < 2; j++)
        scanf("%d", &matb[i][j]) ;

    for(i = 0 ; i < 2; i++)
    {
      for(j = 0 ; j < 2 ; j++)
      {
        matc[i][j] = 0 ;
        for(k = 0 ; k < 2 ; k++)
          matc[i][j] = matc[i][j] + mata[i][k] * matb[k][j] ;
      }
    }
    printf("\nThe resultant matrix is : \n\n") ;
    for(i = 0 ; i < 2 ; i++)
    {
      for(j = 0 ; j < 2 ; j++)
      {
        printf("%d \t", matc[i][j]) ;
      }
      printf("\n") ;
    }
}
