// Crivo de Eratosthenes em bitwise
#include <bits/stdc++.h>
using namespace std;
 
// Verifica se qualquer valor de x é primo ou composto
bool ifnotPrime(int prime[], int x)
{
    // checking whether the value of element is set or not. Using prime[x/64], we find
    // the slot in prime array. To find the bit number, we divide x by 2 and take its mod with 32.
    return (prime[x/64] & (1<<( (x >> 1) & 31)));
}
 
// Marca os x composto em prime[]
bool makeComposite(int prime[], int x)
{
    // Set a bit corresponding to given element.
    // Using prime[x/64], we find the slot in prime 
    // array. To find the bit number, we divide x
    // by 2 and take its mod with 32.
    prime[x/64] |= (1<<( (x >> 1) & 31));
}
 
// Imprime todos os primos menor que n
void bitWiseSieve(int n)
{
    // Assuming that n takes 32 bits, we reduce
    // size to n/64 from n/2.
    int prime[n/64];
 
    // Initializing values to 0 .
    memset(prime, 0, sizeof(prime));
 
    // 2 is the only even prime so we can ignore that
    // loop starts from 3 as we have used in sieve of
    // Eratosthenes .
    for (int i = 3; i * i <= n; i += 2) {
 
        // If i is prime, mark all its multiples as
        // composite
        if (!ifnotPrime(prime, i))
            for (int j = i * i, k = i << 1; j < n; j += k)
                makeComposite(prime, j);
    }
 
    // writing 2 separately
    printf("2 ");
 
    // Printing other primes
    for (int i = 3; i <= n; i += 2)
        if (!ifnotPrime(prime, i))
            printf("%d ", i);
}
 
// Driver code
int main()
{
    int n = 100;
    bitWiseSieve(n);
    printf("\n");
    return 0;
}