#include "KitKat.hpp"

string KitKat(int num) 
{
string returnResults = to_string(num);

    if (num % 3 == 0 && num % 5 == 0) 
    {
        returnResults = "Have a break, have a KitKat!";
    } 
    else if (num % 3 == 0) 
    {
        returnResults = "Kit";
    } 
    else if (num % 5 == 0) 
    {
        returnResults = "Kat";
    } 

    return returnResults;
  }