#include <iostream>

int main()
{
   double a, b;
   double m;

   std::cin >> a; // считали первое число
   std::cin >> b; // считали второе число

   // выбрать большее
   if (a > b) {
      m = a;
   } else {
      m = b;
   }

   std::cout << m * 2; // умножили на 2 и напечатали

   return 0;
}
