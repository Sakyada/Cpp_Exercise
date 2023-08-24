#include "PersonType.h"
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

void PersonType::getInformation() 
{
	cout << "SSN: " << ssn << endl;
    cout << "Name: " << lastName << " " << firstName << endl;
    cout << "Gender: " << gender << endl;
    cout << "Birthdate: " << birthdate << endl;
    cout << "Birthplace: " << birthplace << endl;
    cout << "Address: " << address << endl;
    cout << "Telephone: " << tel << endl;
}