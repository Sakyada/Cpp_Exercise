#ifndef PERSONTYPE_H
#define PERSONTYPE_H

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

#endif
