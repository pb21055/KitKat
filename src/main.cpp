#include "KitKat.hpp"

int main() 
{
  string results;
  for (int i = 1; i <= 100; i++) 
  {
    results = KitKat(i);
    cout << results << endl;
  } 
}