#include <iostream>
#include <string>
using namespace std;

struct NameType 
{
  string firstname;
  string middlename;
  string lastname;
};

struct DateType 
{
  int day;
  int month;
  int year;
};

struct ContactType 
{
  string email;
  string phone;
  string fac;
};

struct AddressType 
{
  string houseno;
  string streetno;
  string commune;
  string district;
  string province;
};

class EmployeeType
{
private:
  int emp;
  NameType name;
  string gender;
  DateType birthdate;
  ContactType contact;
  AddressType address;
public:
  EmployeeType() 
  {
    emp = 0;
    name = {"", "", ""};
    gender = "";
    birthdate = {0, 0, 0};
    contact = {"", "", ""};
    address = {"", "", "", "", ""};
  }

  // Constructor with parameters
  EmployeeType(int e, NameType n, string g, DateType b, ContactType c, AddressType a) 
  {
    emp = e;
    name = n;
    gender = g;
    birthdate = b;
    contact = c;
    address = a;
  }

  // Getter and Setter functions for each member variable
  int getEmp() { return emp; }
  void setEmp(int e) { emp = e; }

  NameType getName() { return name; }
  void setName(NameType n) { name = n; }

  string getGender() { return gender; }
  void setGender(string g) { gender = g; }

  DateType getBirthdate() { return birthdate; }
  void setBirthdate(DateType b) { birthdate = b; }

  ContactType getContact() { return contact; }
  void setContact(ContactType c) { contact = c; }

  AddressType getAddress() { return address; }
  void setAddress(AddressType a) { address = a; }


  void showInfo() 
  {
    cout << "Employee ID: " << emp << endl;
    cout << "Name: " << name.lastname << " " << name.middlename << " " << name.firstname << endl;
    cout << "Gender: " << gender << endl;
    cout << "Birthdate: " << birthdate.day << "/" << birthdate.month << "/" << birthdate.year << endl;
    cout << "\nContact Information:\nEmail: " << contact.email << "\nPhone: " << contact.phone 
		 << "\nFacility: " << contact.fac << endl;
    cout << "\nAddress:\nHouse Number: " << address.houseno << "\nStreet Number: " << address.streetno 
		 << "\nCommune: " << address.commune << "\nDistrict: " << address.district << "\nProvince: " 
		 << address.province << endl;
  }
};

int main() 
{
  
  EmployeeType emp1(1234, {"Sakada", "Chan", "Soeung"}, "Male", {18, 4, 2001},
  						  {"Sakyada@example.com", "061612852", "Western University"}, 
						  {"SSS-Rank", "St-SendMePizza.", "Luke-D-Duke_ville", "IDK District", "Phnom Penh"});
  emp1.showInfo();

  return 0;
}
