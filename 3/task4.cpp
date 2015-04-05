#include <iostream>

using namespace std;

#define ARRAY_SIZE 100

int main()
{
   int array[ARRAY_SIZE];

   long long sum = 0;
   for(int i = 0; i < ARRAY_SIZE; ++i) {
      sum += array[i];
   }

   sum = sum / ARRAY_SIZE;

   cout << "average: " << sum << endl;

   return 0;
}
