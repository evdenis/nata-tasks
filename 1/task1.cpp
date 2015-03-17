#include <iostream>

using namespace std;

int main()
{
   double a, b;
   double m;

   cin >> a; // считали первое число
   cin >> b; // считали второе число

   // выбрать большее
   if (a > b) {
      m = a;
   } else {
      m = b;
   }

   cout << m * 2; // умножили на 2 и напечатали

   return 0;
}
