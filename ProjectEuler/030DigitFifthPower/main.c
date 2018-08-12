#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int power5[10];
    int i;
    for(i=1;i<10;i++)
        power5[i]=pow(i,5);
    return 0;
}


/*double super_sum = 0;
for (int j = 2; j < 1000000; j++)
{
    int num = j;
    double sum_of_dig = 0;
    string num_string = num.ToString();
    for (int i = 0; i < num_string.Length; i++)
    {
        double pow = int.Parse(num_string[i].ToString());
        sum_of_dig += Math.Pow(pow, 5);
    }
    if (sum_of_dig == num)
        super_sum += sum_of_dig;
}
Console.WriteLine("Final Sum :"+ super_sum);
*/
