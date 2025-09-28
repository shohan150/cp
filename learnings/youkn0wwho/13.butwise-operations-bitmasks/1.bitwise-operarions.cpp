#include <bits/stdc++.h>
using namespace std;

void calculate_the_maximum(int n, int k)
{
   int max_and = 0, max_or = 0, max_xor = 0;

   for (int i = 1; i <= n; i++)
   {
      for (int j = i + 1; j <= n; j++)
      {
         // cout << i << " " << j << " " << k << " "
         //      << (i & j) << " "
         //      << (i | j) << " "
         //      << (i ^ j) << "\n";
         max_and = max(max_and, (i & j) < k ? i & j : max_and);
         max_or = max(max_or, (i | j) < k ? i | j : max_or);
         max_xor = max(max_xor, (i ^ j) < k ? i ^ j : max_xor);
      }
   }

   cout << max_and << "\n"
        << max_or << "\n"
        << max_xor << "\n";
}

int main()
{
   int n, k;

   scanf("%d %d", &n, &k);
   calculate_the_maximum(n, k);

   return 0;
}