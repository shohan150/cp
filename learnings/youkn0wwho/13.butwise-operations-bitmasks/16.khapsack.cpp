#include <bits/stdc++.h>
using namespace std;

int main()
{
   int itemCount, capacity;

   cin >> itemCount >> capacity;

   int weights[itemCount], values[itemCount];
   for (int i = 0; i < itemCount; i++)
   {
      cin >> weights[i];
      cin >> values[i];
   }

   int maxPossibleValue = 0;

   int totalPossiblePermutations = 1 << itemCount;
   for (int i = 0; i < totalPossiblePermutations; i++)
   {
      int consumedWeight = 0, consumedValue = 0;

      for (int j = 0; j < itemCount; j++)
      {
         if ((i >> j) & 1)
         {
            consumedWeight += weights[j];
            consumedValue += values[j];
         }
      }

      if (consumedWeight <= capacity)
      {
         maxPossibleValue = max(maxPossibleValue, consumedValue);
      }
   }

   cout << maxPossibleValue << endl;
   return 0;
}