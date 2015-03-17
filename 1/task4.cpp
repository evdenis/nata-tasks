#include <iostream>

using namespace std;

int main()
{
   double a, b, c, d; // оригинальные числа
   double max1, min1, max2, min2; // вспомогательные переменные

   // считали числа
   cin >> a >> b >> c >> d;

   // выбрать наибольшее в паре a,b
   if (a > b) {
      max1 = a;
      min1 = b;
   } else {
      max1 = b;
      min1 = a;
   }

   // выбрать наибольшее в паре c,d
   if (c > d) {
      max2 = c;
      min2 = d;
   } else {
      max2 = d;
      min2 = c;
   }

   // сравнить наибольшие из пар
   if (max2 > max1) {
      // обмен значениями
      double t;
      t = max1;
      max1 = max2;
      max2 = t;
   }

   //сравнить наименьшие из пар
   if (min2 > min1) {
      // обмен значениями
      double t;
      t = min1;
      min1 = min2;
      min2 = t;
   }

   //сравнить наименьшие наименьшее и наибольшее из двух пар
   if (min1 > max2) {
      // обмен значениями
      double t;
      t = max2;
      max2 = min1;
      min1 = t;
   }

   // вывели отсортированные значения
   cout << endl;
   cout << min2 << endl;
   cout << min1 << endl;
   cout << max2 << endl;
   cout << max1 << endl;

   return 0;
}
