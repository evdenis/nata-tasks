#include <iostream>

using namespace std;

int main()
{
   double a, b, c;

   cin >> a >> b >> c; // считали числа

   //wiki: В невырожденном треугольнике сумма длин двух его сторон больше длины третьей стороны, в вырожденном — равна.
   if ((a + b < c) || (a + c < b) || (b + c < a)) {
      cout << "no";
   } else {
      cout << "yes";
   }

   return 0;
}
