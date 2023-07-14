#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct CustomerType {
  int cusid;
  string firstname;
  string lastname;
  string birthdate;
  string address;
  string tel;
};

int main() {
  CustomerType cus; 
  
  cout << "Enter customer ID: ";
  cin >> cus.cusid;
  cout << "Enter first name: ";
  cin >> cus.firstname;
  cout << "Enter last name: ";
  cin >> cus.lastname;
  cout << "Enter birthdate (dd/mm/yyyy): ";
  cin >> cus.birthdate;
  cout << "Enter address: ";
  cin.ignore(); 
  getline(cin, cus.address);
  cout << "Enter telephone number: ";
  cin >> cus.tel;
  cout << endl;

  cout << setw(15) << left << "Customer ID" 
		<< setw(15) << left << "First Name" 
		<< setw(15) << left << "Last Name" 
		<< setw(15) << left << "Birthdate" 
		<< setw(15) << left << "Address" 
		<< setw(15) << left << "Telephone"
		<< endl;
			
	cout << setfill('-') << setw(86) << "-" << setfill(' ') << endl;
	
	cout << setw(15) << left  << cus.cusid 
		<< setw(15) << left  << cus.firstname 
		<< setw(15) << left  << cus.lastname 
		<< setw(15) << left  << cus.birthdate
		//<< fixed << showpoint << setprecision(2) 
		<< setw(15) << left  << cus.address 
		<< setw(15) << left  << cus.tel
		<< endl;
	
  return 0;
}
