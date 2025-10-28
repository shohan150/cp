#include <bits/stdc++.h>
using namespace std;

int main()
{
   int problemCount, minComplexity, maxComplexity, minComplexityDiff, result = 0;

   cin >> problemCount >> minComplexity >> maxComplexity >> minComplexityDiff;

   int complexityArray[problemCount];
   for (int i = 0; i < problemCount; i++)
   {
      cin >> complexityArray[i];
   }
   int maxPossiblePermutation = 1 << problemCount;

   for (int i = 0; i < maxPossiblePermutation; i++)
   {

      // cout << "Permutation count: " << i << "\n";
      // int availableComplexity[problemCount];
      int length = 0, total = 0, maxCom = 0, minCom = maxComplexity;
      for (int bit = 0; bit < problemCount; bit++)
      {
         int isSet = ((i >> bit) & 1);
         if (isSet)
         {
            int complexity = complexityArray[bit];
            total += complexity;
            // availableComplexity[length++] = complexity;
            maxCom = max(maxCom, complexity);
            minCom = min(minCom, complexity);
         }
      }
      // cout << total << " " << maxCom << " " << minCom << "\n";

      if (total >= minComplexity && total <= maxComplexity && maxCom - minCom >= minComplexityDiff)
      {
         result++;
         // cout << "Yes " << result << "\n";
      }
   }
   cout << result << "\n";
   return 0;
}