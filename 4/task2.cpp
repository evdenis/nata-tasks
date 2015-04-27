#include <iostream>

using namespace std;

int main()
{
   int a[10];
   
   for(int i = 0; i < 10; ++i) {
      cin >> a[i];
   }

   int min1 = 100000; //Максимальное число, больше чем введённое с клавиатуры
   int min2 = 100000; //Максимальное число, больше чем введённое с клавиатуры
   for(int i = 0; i < 10; ++i) {
      if (a[i] < min1) {
         min2 = min1;
         min1 = a[i];
      }
   }
   
   cout << "Result: " << min1 << " " << min2 << endl;

   return 0;
}
