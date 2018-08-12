#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}


/*
 def fractions():
     for numerator in map(str, xrange(10, 100)):
       for denominator in map(str, xrange(int(numerator)+1, 100)):
             if numerator == denominator: continue
             if numerator[1] == denominator[1] and numerator[1] == '0': continue
             if numerator[0] == denominator[0] and int(numerator) * int(denominator[1]) == int(denominator) * int(numerator[1]): yield(int(numerator), int(denominator))
             if numerator[0] == denominator[1] and int(numerator) * int(denominator[0]) == int(denominator) * int(numerator[1]): yield(int(numerator), int(denominator))
             if numerator[1] == denominator[1] and int(numerator) * int(denominator[0]) == int(denominator) * int(numerator[0]): yield(int(numerator), int(denominator))
             if numerator[1] == denominator[0] and int(numerator) * int(denominator[1]) == int(denominator) * int(numerator[0]): yield(int(numerator), int(denominator))

 def gcd(a,b): return b and gcd(b, a % b) or a

 numerator = 1
 denominator = 1
 for frac in fractions():
     numerator = numerator * frac[0]
     denominator = denominator * frac[1]

 g = gcd(numerator, denominator)
 print denominator / g
*/
