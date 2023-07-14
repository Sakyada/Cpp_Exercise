#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct CustomerType
{
    string name;
    string address;
    string city;
    string tel;
};

int main() 
{
    CustomerType customers[50];

    for (int i = 0; i < 50; i++) 
	{
        cout << "Enter information for customer " << i+1 << ":" << endl;
        cout << "Name: ";
        getline(cin, customers[i].name);
        cout << "Address: ";
        getline(cin, customers[i].address);
        cout << "City: ";
        getline(cin, customers[i].city);
        cout << "Tel: ";
        getline(cin, customers[i].tel);
        cout << endl;
    }

    cout << "Customer Information:" << endl;
    cout << "|||||||||||||||||||||" << endl;
    
    	cout << setfill('=') << setw(71) << "=" << setfill(' ') << endl;
    	
    	cout << setw(15) << left << "Customer " 
			<< setw(15) << left << "Name: " 
			<< setw(15) << left << "Address: " 
			<< setw(15) << left << "City: " 
			<< setw(15) << left << "Telephone: "
			<< endl;
				
		cout << setfill('=') << setw(71) << "=" << setfill(' ') << endl;
		
    for (int i = 0; i < 50; i++) 
	{
        
		cout << setw(15) << left << i+1  
			<< setw(15) << left  << customers[i].name 
			<< setw(15) << left  << customers[i].address
			<< setw(15) << left  << customers[i].city
			//<< fixed << showpoint << setprecision(2) 
			<< setw(15) << left  << customers[i].tel
			<< endl;
	}
	
    return 0;
}
