#include <iostream>

using namespace std;

int main()
{
   int array[10];

   cout << "Array:  ";
   for(int i = 0; i <= 9; ++i) { // заполняем цифрами от 1 до 10
      array[i] = i + 1;
      cout << array[i] << " ";
   }
   cout << endl;

   for(int i = 0; i < 5; ++i) { // меняем местами элементы на противоположных концах
      int tmp      = array[i];
      array[i]     = array[9 - i];
      array[9 - i] = tmp;
   }

   cout << "Result: ";
   for(int i = 0; i <= 9; ++i) { // вывод результата
      cout << array[i] << " ";
   }
   cout << endl;

   return 0;
}
