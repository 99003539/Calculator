#include "leapyear.h"
int leapyear(int y)
{
    if( (y%100 == 0 && y%400 == 0) ||  
        (y%100 != 0 && y%4   == 0)   ) 
    return 1;
    else
    return 0;
}