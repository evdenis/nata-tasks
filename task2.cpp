#include <iostream>

int main()
{
   double a, b, c;
   double m;

   std::cin >> a; // считали первое число
   std::cin >> b; // считали второе число
   std::cin >> c; // считали третье число

   // выбрать большее из a и b
   if (a > b) {
      m = a;
   } else {
      m = b;
   }
   // если c больше, то считать его максимумом
   if (m < c) {
      m = c;
   }

   // вывести максимум и перевести строку
   std::cout << m << std::endl;

   int i = 0; //количество совпадающих
   if (a == b && b == c) { // либо все цифры совпадают
      i = 3;
   } else if (a == b || b == c || a == c) { // либо совпадает каких-то два числа
      i = 2;
   }

   // вывести количество совпадающих
   std::cout << i;

   return 0;
}
