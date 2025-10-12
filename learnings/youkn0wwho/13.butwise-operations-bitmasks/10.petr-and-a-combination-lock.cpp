#include <bits/stdc++.h>
using namespace std;

int main()
{
   int rotationCount, rotationValues[15];
   cin >> rotationCount;

   for (int i = 0; i < rotationCount; i++)
   {
      cin >> rotationValues[i];
   }

   for (int i = 0; i < rotationCount; i++)
   {
      cout << rotationValues[i] << " ";
   }
   return 0;
}