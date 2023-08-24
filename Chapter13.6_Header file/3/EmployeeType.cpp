#include "EmployeeType.h"
#include <iostream>
using namespace std;

PersonType::PersonType() 
{
	ssn = "";
    firstName = "";
    lastName = "";
    gender = "";
    birthdate = "";
    birthplace = "";
    address = "";
    tel = "";
}

PersonType::PersonType(string s, string fName, string lName, string g, string bd, string bp, string addr, string ph) 
{
	ssn = s;
    firstName = fName;
    lastName = lName;
    gender = g;
    birthdate = bd;
    birthplace = bp;
    address = addr;
    tel = ph;
}

void PersonType::setSSN(string s) 
{
    ssn = s;
}

string PersonType::getSSN() 
{
    return ssn;
}

void PersonType::setFirstName(string fName) 
{
    firstName = fName;
}

string PersonType::getFirstName() 
{
    return firstName;
}

void PersonType::setLastName(string lName) 
{
    lastName = lName;
}

string PersonType::getLastName() 
{
    return lastName;
}

void PersonType::setGender(string g) 
{
    gender = g;
}

string PersonType::getGender() 
{
    return gender;
}

void PersonType::setBirthdate(string bd) 
{
    birthdate = bd;
}

string PersonType::getBirthdate() 
{
    return birthdate;
}

void PersonType::setBirthplace(string bp) 
{
    birthplace = bp;
}

string PersonType::getBirthplace() 
{
    return birthplace;
}

void PersonType::setAddress(string addr) 
{
    address = addr;
}

string PersonType::getAddress() 
{
    return address;
}

void PersonType::setTel(string ph) 
{
    tel = ph;
}

string PersonType::getTel() 
{
    return tel;
}





class EmployeeType : public PersonType 
{
private:
    string empid;
    string pos;
    double salary;
    double bonus;
public:
    // Default constructor
    EmployeeType() 
	{
        empid = "";
        pos = "";
        salary = 0.0;
        bonus = 0.0;
    }

    // Parameterized constructor
    EmployeeType(string s,string fName, string lName, string g, string bd, string bp, string addr, string ph, string eid, string p, double sal, double b) : PersonType(s,fName, lName, g, bd, bp, addr, ph) 
	{
        empid = eid;
        pos = p;
        salary = sal;
        bonus = b;
    }

    // Getters and setters
    void setEmpID(string eid) 
	{
        empid = eid;
    }

    string getEmpID() 
	{
        return empid;
    }

    void setPosition(string p) 
	{
        pos = p;
    }

    string getPosition() 
	{
        return pos;
    }

    void setSalary(double sal) 
	{
        salary = sal;
    }

    double getSalary() 
	{
        return salary;
    }

    void setBonus(double b) 
	{
        bonus = b;
    }

    double getBonus()
	{
        return bonus;
    }


    void getInformation() 
	{
       	cout << "SSN         : " << ssn << endl;
	    cout << "Name        : " << lastName << " " << firstName << endl;
	    cout << "Gender      : " << gender << endl;
	    cout << "Birthdate   : " << birthdate << endl;
	    cout << "Birthplace  : " << birthplace << endl;
	    cout << "Address     : " << address << endl;
	    cout << "Telephone   : " << tel << endl;
        cout << "Employee ID : " << empid << endl;
        cout << "Position    : " << pos << endl;
        cout << "Salary      : $ " << salary << endl;
        cout << "Bonus       : $ " << bonus << endl;
    }
};