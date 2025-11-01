#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin >> t;
   while (t--) {
      long long n;
      cin >> n;

      // Step 1: normal sum of 1..n
      long long total = n * (n + 1) / 2;

      // Step 2: find all powers of two up to n
      long long sumPowers = 0;
      long long p = 1;
      while (p <= n) {
         sumPowers += p;
         p *= 2;  // move to next power of two
      }

      // Step 3: adjust result
      long long ans = total - 2 * sumPowers;

      cout << ans << "\n";
   }

   return 0;
}