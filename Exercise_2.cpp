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

int main()
{
  NameType name = {"Sakada", "Chan", "Soeung"};
  DateType date = {18, 4, 2001};
  ContactType contact = {"Sakyada@example.com", "061612852", "Western University"};
  AddressType address = {"SendMePizza", "St2001.", "IdontKnow_ville", "IDK District", "Phnom Penh"};


  cout << "Name: " << name.lastname << " " << name.middlename << " " << name.firstname << endl;
  //cout << "Name: " << name.firstname << " " << name.middlename << " " << name.lastname << endl;
  cout << "Date: " << date.day << "/" << date.month << "/" << date.year << endl;
  cout << "\nContact Information:\nEmail: " << contact.email << "\nPhone: " << contact.phone << "\nFacility: " << contact.fac << endl;
  cout << "\nAddress:\nHouse Number: " << address.houseno << "\nStreet Number: " << address.streetno << "\nCommune: " << address.commune << "\nDistrict: " << address.district << "\nProvince: " << address.province << endl;

  return 0;
}
