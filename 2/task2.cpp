#include <iostream>

using namespace std;

int main()
{
   unsigned int a = 0, b = 1;
   unsigned int limit = 47; // Больше - происходит целочисленное переполнение переменной fib

   cout << "0: " << a << endl;
   cout << "1: " << b << endl;
   for(unsigned int n = 2; n <= limit; ++n)
   {
      unsigned int fib = a + b;

      cout << n << ": " << fib << endl;

      a = b;
      b = fib;
   }

   return 0;
}
