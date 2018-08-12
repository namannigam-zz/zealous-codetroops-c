#include <stdio.h>
#define POWER 1000

int digits[POWER * 4/10] = {1};
int ndigits = 1;

int main(void)
{
    int i,n,j;
    for(i = 0; i < POWER; i++)
        for(n = 0, j = 0;; j++)
        {
            n += digits[j] * 2;
            digits[j] = n % 10;
            n /= 10;
            if (j == ndigits-1)
            {
                if (!n) break;
                ndigits++;
            }
        }

    int sum = 0;
    for (i = 0; i < ndigits; i++)
        sum += digits[i];

    printf("%d\n", sum);

    return 0;
}
