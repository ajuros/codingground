#include <iostream>
#include <bitset> 
#include <stdint.h>

using namespace std;

int main()
{
   cout << "Hello World" << endl; 
   uint64_t a = 0xFFFF110000000011;
   uint32_t high;
   uint32_t low;
   
   high = (uint32_t) (a >> 32);
   low = (uint32_t) a;
   
   cout << "high=" << high << " low=" << low << endl;
   
   return 0;
}

