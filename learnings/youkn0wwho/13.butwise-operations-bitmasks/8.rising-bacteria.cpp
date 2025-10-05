#include <bits/stdc++.h>
using namespace std;

int main()
{
   int X, count = 0;
   cin >> X;

   while (X > 0)
   {
      int bit = X % 2; // to get the binary representation. Tho no work with the representation itself
      if (bit == 1)
         count++; // count the number of 1's un the binary representation
      X /= 2;     // shift right (divide by 2)
   }

   cout << count << '\n';
   return 0;
}