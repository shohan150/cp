#include <bits/stdc++.h>
using namespace std;

int giveUpdatedAngle(int currentDialAngle)
{
   if (currentDialAngle < 0)
   {
      return 360 + currentDialAngle;
   }
   else if (currentDialAngle > 360)
   {
      return currentDialAngle - 360; // ig curentDialAngle % 360 is better. Idea came to mind after submission.
   }
   else
   {
      return currentDialAngle;
   }
}

int main()
{
   int rotationCount, rotationValues[15];
   cin >> rotationCount;

   for (int i = 0; i < rotationCount; i++)
   {
      cin >> rotationValues[i];
   }

   int total = 1 << rotationCount;
   // cout << total << "\n";

   for (int i = 0; i < total; i++)
   {
      // cout << i << " : ";
      int currrentDialAngle = 0;
      for (int bit = 0; bit < rotationCount; bit++)
      {
         int isSet = ((i >> bit) & 1);
         if (isSet)
         {
            currrentDialAngle += rotationValues[bit];
         }
         else
         {
            currrentDialAngle -= rotationValues[bit];
         }

         currrentDialAngle = giveUpdatedAngle(currrentDialAngle);
         // cout << "step " << bit << " : " << currrentDialAngle << " ";
      }

      if (currrentDialAngle == 0)
      {
         cout << "YES";
         return 0;
      }
      // cout << "\n";
   }
   cout << "NO";
   return 0;
}
