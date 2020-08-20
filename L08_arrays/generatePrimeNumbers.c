/* L08 - Arrays Prime Number Challenge
 * - create a program that will find all the prime numbers from 3-100
 * - the outpout will be each prime number separated by a space on a single line
 * - create an array that will store each prime number as it's generated
 * - you can hard-code the first two prime numbers (2 and 3) in the primnes array
 * - utilize loops to only find prime numbers up to 100 and a loop to print the primes array
 * - the criteria that can be used to identify a prime number is that a number is
 *      - considered prime if it is not evenly divisible by any other previous prime
 *      - numbers
*/



#include <stdio.h>

int main()
{
    int p; // outer loop counter
    int i; // inner loop counter

    int primes[50] = {0}; // integer array to store prime numbers
    int primeIndex = 2;
    int isPrime;;

    // hard code first two prime numbers
    primes[0] = 2;
    primes[1] = 3;

    for(p = 5; p <= 100; p += 2)
    {
        isPrime = 1;

        for(i = 1; isPrime && p / primes[i] >= primes[i]; ++i)
        {
            if(p % primes[i] == 0)
            {
                isPrime = 0;
            }
        }
        if (isPrime == 1)
        {
            primes[primeIndex] = p;
            ++primeIndex;
        }
    }

    for(int j = 0; j < 50; ++j)
    {
        if(primes[j] != 0) printf("primes[%d]: %d\n", j, primes[j] );
    }

    return 0;
}