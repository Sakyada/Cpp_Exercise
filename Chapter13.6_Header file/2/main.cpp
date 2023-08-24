#include "CustomerType.h"
#include "CustomerType.cpp"
#include <iostream>


int main() 
{
   
   CustomerType customer("1-2-3", "MyAsS", "Limited", "They/Them", "11/11/1111", "Hospital", "SendNude", "143-169-126", "CC0117");
    customer.getInformation();
    return 0;
}