#include <bits/stdc++.h>
using namespace std;

int main()
{
   int k, s;
   cin >> k >> s;

   if (3 * k == s)
   {
      cout << "1";
      return 1;
   }

   int count = 0;
   for (int x = 0; (x <= k && x <= s); x++)
   {
      cout << "x" << x << " " << count << endl;
      if (x == s)
      {
         count++;
         continue;
      }
      for (int y = 0; (y <= k && x + y <= s && x + y + k >= s); y++)
      {
         cout << x << y << endl;
         if (x + y == s)
         {
            count++;
            continue;
         }

         for (int z = (s - x - y); z <= k; z++)
         {
            cout << x << y << z << endl;
            if (x + y + z == s)
               count++;
         }
      }
   }

   cout << count;
   return count;
}
