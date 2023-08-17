#include <iostream>
#include <vector>
using namespace std;

class CustomerType 
{
public:
   
    string cusid;
    string name;
    string gender;
    string address;
    string city;
    string tel;
};

class CustomerListType 
{
private:
    vector<CustomerType> customers;

public:
    CustomerListType() {}

    CustomerListType(CustomerType customer) 
	{
        customers.push_back(customer);
    }

    void addItem(CustomerType customer) 
	{
        customers.push_back(customer);
    }

    void deleteItem(string cusid) 
	{
        for (auto it = customers.begin(); it != customers.end(); it++) 
		{
            if (it->cusid == cusid) 
			{
                customers.erase(it);
                return;
            }
        }
    }

    void updateItem(CustomerType customer) 
	{
        for (auto& c : customers) 
		{
            if (c.cusid == customer.cusid) 
			{
                c = customer;
                return;
            }
        }
    }

    CustomerType searchItem(string cusid) 
	{
        for (auto& c : customers) 
		{
            if (c.cusid == cusid) 
			{
                return c;
            }
        }
        CustomerType nullCustomer;
        nullCustomer.cusid = "NULL";
        return nullCustomer;
    }

    void listInformation() 
	{
        for (auto& c : customers) 
		{
            cout << "Customer ID: " << c.cusid << endl;
            cout << "Name: " << c.name << endl;
            cout << "Gender: " << c.gender << endl;
            cout << "Address: " << c.address << endl;
            cout << "City: " << c.city << endl;
            cout << "Telephone: " << c.tel << endl;
            cout << endl;
        }
    }
};


int main() 
{
    CustomerListType customers;

    // Add some customers
    CustomerType customer1 = {"C01", "Professional Umemployed", "God", "Heaven", "DreamLand", "143-169-126"};
    CustomerType customer2 = {"C02", "Limited MyAsS", "Lucifer", "Hell", "Nightmare", "444-999-94"};
    customers.addItem(customer1);
    customers.addItem(customer2);

    
    customers.listInformation();

   
    CustomerType searchedCustomer = customers.searchItem("C01");
    if (searchedCustomer.cusid != "NULL") 
	{
        cout << "Searched customer found!" << endl;
        cout << "Name: " << searchedCustomer.name << endl;
    } 
	else 
	{
        cout << "Searched customer not found." << endl;
    }

    
    CustomerType updatedCustomer = {"C02", "Rock Star", "Alien", "Mar", "SpaceCity", "000-000-000"};
    customers.updateItem(updatedCustomer);

    
    customers.deleteItem("001");

    
    customers.listInformation();

    return 0;
}
