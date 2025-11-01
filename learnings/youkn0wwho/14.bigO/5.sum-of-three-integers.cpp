#include <bits/stdc++.h>
using namespace std;

int main()
{
   int k, s;
   cin >> k >> s;

   if (3 * k == s)
   {
      cout << "1";
      return 0;
   }

   int count = 0;
   for (int x = 0; x <= k; x++)
   {
      // cout << "x" << x << " " << count << endl;
      for (int y = 0; y <= k; y++)
      {
         // cout << x << y << endl;
         int z = (s - x - y);
         // cout << x << y << z << endl;
         if (z >= 0 && z <= k)
            count++;
      }
   }

   cout << count;
   return 0;
}
