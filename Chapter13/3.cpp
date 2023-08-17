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

int main() 
{

    EmployeeType emp("1-2-3", "MyAsS", "Limited", "They/Them", "11/11/1111", "Hospital", "SendNude",
					 "143-169-126", "CC0117", "Professional Umemployed", 1800.0,100.0);

    emp.getInformation();

    return 0;
}

