#include <iostream>
#include <string>
using namespace std;


class PersonType 
{
protected:
	string ssn;
    string firstName;
    string lastName;
    string gender;
    string birthdate;
    string birthplace;
    string address;
    string tel;
public:
    PersonType();
    PersonType(string, string, string, string, string, string, string, string);
    
	void setSSN(string);
    string getSSN();
    
    void setFirstName(string);
    string getFirstName();
    
    void setLastName(string);
    string getLastName();
    
    void setGender(string);
    string getGender();
    
	void setBirthdate(string);
    string getBirthdate();
    
	void setBirthplace(string);
    string getBirthplace();
    
	void setAddress(string);
    string getAddress();
    
	void setTel(string);
    string getTel();
    
	void getInformation();
};


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


int main() 
{
   
   PersonType person("1-2-3", "MyAsS", "Limited", "They/Them", "11/11/1111", "Hospital", "SendNude", "143-169-126");
    person.getInformation();
    return 0;
}
