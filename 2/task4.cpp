#include <iostream>

using namespace std;

int main()
{
   int a, b, c;
   int sum = 0;
                                    // ++a, ++b, ++c
   for(a = 1, b = 2, c = 3; a <= 100; a = b, b = c, ++c) {
      int t = b - c; // всегда -1
      sum += a + t;
      //cout << a << ": " << sum << endl;
   }
   cout << sum << endl;

   return 0;
}
