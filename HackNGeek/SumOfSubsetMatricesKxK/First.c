/*void printSumSimple(int mat[][N], int k)
{
   int i,j,p,q;
   if (k > N) return;
   for (i=0; i<N-k+1; i++)
   {
       for (j=0; j<N-k+1; j++)
        {
          int sum = 0;
          for (p=i; p<k+i; p++)
             for (q=j; q<k+j; q++)
                 sum += mat[p][q];
           printf("%d ",sum);
      }
     printf("\n");
   }
}*/
