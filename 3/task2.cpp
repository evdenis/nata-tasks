#include <iostream>

using namespace std;

#define ARRAY_SIZE 100

int main()
{
   int array[ARRAY_SIZE];

   for(int i = 0; i < ARRAY_SIZE; i = i + 2) {
      int tmp      = array[i];
      array[i]     = array[i + 1];
      array[i + 1] = tmp;
   }

   return 0;
}
