#include <stdio.h>

int main()
{
    int primes[50] = { 0 };
    int primeIndex = 2;
    _Bool isPrime;
    
    primes[0] = 2;
    primes[1] = 3;
    
    for (int p = 5; p <= 100; p += 2)
    {
        isPrime = 1;
        for (int i = 1; isPrime && p / primes[i] >= primes[i]; ++i)
        {
            if (p % primes[i] == 0)
                isPrime = 0; 
        }
        
        if (isPrime == 1) 
        {
            primes[primeIndex] = p;
            ++primeIndex;
        }
    }
    
    for (int i = 0; i <= 24; ++i) 
    {
        printf("%i is prime\n", primes[i]);
    }
    return 0;
}
