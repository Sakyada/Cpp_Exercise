#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct EmployeeType 
{
  string name;
  string position;
  double salary;
};

class EmployeeListType 
{
private:
  vector<EmployeeType> vector;
  int length;
  int size;
public:
  // Constructor
  EmployeeListType(int s) 
  {
    length = 0;
    size = s;
  }

  void addItem(EmployeeType e) 
  {
    if (length < size) 
	{
      vector.push_back(e);
      length++;
      cout << "** Employee added successfully.\n";
    }
	 else {
      cout << "Error: Employee list is full.\n";
    }
  }

 
  void deleteItem(int index) 
  {
    if (index >= 0 && index < length) 
	{
      vector.erase(vector.begin() + index);
      length--;
      cout << "** Employee deleted successfully.\n";
    } 
	else {
      cout << "Error: Invalid index.\n";
    }
  }

  
  void updateItem(EmployeeType e) 
  {
    bool found = false;
    for (int i = 0; i < length; i++) 
	{
      if (vector[i].name == e.name) 
	  {
        vector[i] = e;
        found = true;
        cout << "** Employee updated successfully.\n";
        break;
      }
    }
    if (!found) {
      cout << "Error: Employee not found.\n";
    }
  }

  void printList() const 
  {
    if (length == 0) 
	{
      cout << "Employee list is empty.\n";
    } 
	else 
	{
      cout << "\nEmployee List:\n";
      for (int i = 0; i < length; i++) 
	  {
        cout << "Name: " << vector[i].name << endl;
        cout << "Position: " << vector[i].position << endl;
        cout << "Salary: $" << vector[i].salary << endl;
        cout << endl;
      }
    }
  }
};

int main() 
{

  EmployeeListType list(3);

  // Add employees to the list
  EmployeeType e1 = {"Hey Man!", "Manager", 50000.0};
  list.addItem(e1);

  EmployeeType e2 = {"No Man!", "Assistant", 30000.0};
  list.addItem(e2);

  EmployeeType e3 = {"Yes Man!", "Clerk", 20000.0};
  list.addItem(e3);

  // Print the employee list
  list.printList();

  // Delete an employee from the list
  list.deleteItem(1);

  // Update an employee in the list
  EmployeeType e4 = {"Hey Man!", "CEO", 100000.0};
  list.updateItem(e4);

  // Print the employee list again
  list.printList();

  return 0;
}
