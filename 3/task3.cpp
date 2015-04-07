#include <iostream>

using namespace std;

int main()
{
   int array[10];

   cout << "Array:  ";
   for(int i = 0; i < 10; ++i) { // заполняем цифрами от 1 до 10
      array[i] = i + 1;
      cout << array[i] << " ";
   }
   cout << endl;

   int sum = 0;
   for(int i = 0; i < 10; ++i) { // суммируем
      sum += array[i];
   }

   cout << "sum: " << sum << endl;
   cout << "sum % 2: " << sum % 2 << endl;  // остаток от деления на 2
   cout << "average: " << sum / 10 << endl; // среднее

   return 0;
}
