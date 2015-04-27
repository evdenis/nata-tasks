#include <iostream>

using namespace std;

int main()
{
   double v = 0;
   double n = 0;
   for(int i = 1; i <= 10; ++i) {
      double tmp = (double) 1.0 / i;
      v += tmp * tmp;
      n += tmp;
   }

   cout << "Result: " << v / n << endl;

   return 0;
}
