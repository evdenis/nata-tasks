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

   for(int i = 0; i < 10; i = i + 2) { // меняем местами попарно
      int tmp      = array[i];
      array[i]     = array[i + 1];
      array[i + 1] = tmp;
   }
   
   cout << "Result: ";
   for(int i = 0; i < 10; ++i) { // вывод результата
      cout << array[i] << " ";
   }
   cout << endl;

   return 0;
}
