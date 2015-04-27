#include <iostream>

using namespace std;

int main()
{
   int n;

   cin >> n;

   do {
      int a = n % 10; // остаток от деления на 10 (последнее число)
      cout << a;      // выводим 
      n = n / 10;     // отбрасываем последнее число (1/10 == 0)
      //cout << endl << "n: " << n << endl; // раскомментировать для проверки
   } while (n);       // пока n не ноль 

   cout << endl;

   return 0;
}
