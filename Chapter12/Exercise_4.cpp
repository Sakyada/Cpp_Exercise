#include <iostream>
#include <string>
using namespace std;

struct CustomerType 
{
  string name;
  string address;
  string phone;
};

class CustomerListType 
{
private:
  CustomerType* array;
  int length;
  int size;
public:
  CustomerListType(int s) 
  {
    length = 0;
    size = s;
    array = new CustomerType[size];
  }

  ~CustomerListType() 
  {
    delete[] array;
  }

  // Function to add a customer to the list
  void addItem(CustomerType c) 
  {
    if (length < size) 
	{
      array[length] = c;
      length++;
      cout << "** Customer added successfully.\n";
    } 
		else 
		{
	      cout << "Error: Customer list is full.\n";
	    }
  }

  // Function to delete a customer from the list by name
  void deleteItem(string name)
   {
    bool found = false;
    for (int i = 0; i < length; i++) 
	{
      if (array[i].name == name) 
	  {
        for (int j = i; j < length - 1; j++) 
		{
          array[j] = array[j + 1];
        }
        length--;
        found = true;
        cout << "** Customer deleted successfully.\n";
        break;
      }
    }
	    if (!found) 
		{
	      cout << "Error: Customer not found.\n";
	    }
  }

  // Function to update a customer in the list
  void updateItem(CustomerType c) 
  {
    bool found = false;
    for (int i = 0; i < length; i++) 
	{
      if (array[i].name == c.name) 
	  {
        array[i] = c;
        found = true;
        cout << "** Customer updated successfully.\n";
        break;
      }
    }
	    if (!found)
		 {
	      cout << "Error: Customer not found.\n";
	    }
  }

  // Function to print the entire customer list
  void printList() const 
  {
    if (length == 0) 
	{
      cout << "** Customer list is empty.\n";
    } 
	else 
	{
      cout << "\nCustomer List:\n";
      for (int i = 0; i < length; i++) 
	  {
        cout << "Name: " << array[i].name << endl;
        cout << "Address: " << array[i].address << endl;
        cout << "Phone: " << array[i].phone << endl;
        cout << endl;
      }
    }
  }
};

int main() 
{
 
  CustomerListType list(3);

  // Add some customers to the list
  CustomerType c1 = {"Hey Man!", "123 Pizza St.", "555-1234"};
  list.addItem(c1);

  CustomerType c2 = {"No Man!", "456 Burger St.", "555-5678"};
  list.addItem(c2);

  CustomerType c3 = {"Yes Man!", "789 Taco.", "555-9012"};
  list.addItem(c3);

  // Print the customer list
  list.printList();

  // Delete a customer from the list
  list.deleteItem("Hey Man!");

  // Update a customer in the list
  CustomerType c4 = {"No Man!", "189 Sandwich St.", "555-5678"};
  list.updateItem(c4);

  // Print the customer list again
  list.printList();

  return 0;
}
