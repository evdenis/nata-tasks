#include <iostream>

using namespace std;

int main()
{
   int sum = 0;
   for (int i = 0; i < 100; ++i) { //0, 1, 2, 3, 4, 5, ... 99
      sum += 2 * i;                //0, 2, 4, 6, 8, 10, ... 198
   }

   cout << sum << endl;

   return 0;
}
