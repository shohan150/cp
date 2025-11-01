#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
   if (num <= 1)
   {
      return false; // Numbers less than or equal to 1 are not prime
   }
   for (int i = 2; i <= sqrt(num); ++i)
   { // Iterate from 2 up to the square root
      if (num % i == 0)
      {
         return false; // Found a divisor, so not prime
      }
   }
   return true; // No divisors found, so it is prime
}

int main()
{
   int n, almostPrimeCount = 0;
   cin >> n;

   for (int i = 2; i <= n; i++)
   {
      int primeCount = 0;
      for (int j = 2; j <= i; j++)
      {
         // if j is not prime number return
         if (!isPrime(j))
            continue;

         if (i % j == 0)
         {
            primeCount++;

            if (primeCount > 2)
            {
               // cout << "more than 2 factors: " << i << endl;
               break;
            }
         }
      }
      if (primeCount == 2)
      {
         // cout << "exactly 2 factors : " << i << endl;
         almostPrimeCount++;
      }
   }

   cout << almostPrimeCount << endl;

   return 0;
}