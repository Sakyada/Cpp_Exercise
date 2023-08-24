#include "EmployeeType.h"
#include "EmployeeType.cpp"
#include <iostream>

int main() 
{

    EmployeeType emp("1-2-3", "MyAsS", "Limited", "They/Them", "11/11/1111", "Hospital", "SendNude",
					 "143-169-126", "CC0117", "Professional Umemployed", 1800.0,100.0);

    emp.getInformation();

    return 0;
}