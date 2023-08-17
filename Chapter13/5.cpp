#include <iostream>
#include <vector>
#include <string>
using namespace std;


class EmployeeType
{
public:
    string empid;
    string name;
    double salary;
};


class EmployeeListType 
{
private:
    vector<EmployeeType> employees;

public:
    EmployeeListType() {}

    EmployeeListType(EmployeeType employee) 
	{
        employees.push_back(employee);
    }

    void addItem(EmployeeType employee) 
	{
        employees.push_back(employee);
    }

    void deleteItem(string empid) 
	{
        for (int i = 0; i < employees.size(); i++) 
		{
            if (employees[i].empid == empid) 
			{
                employees.erase(employees.begin() + i);
                return;
            }
        }
    }

    void updateItem(EmployeeType employee) 
	{
        for (int i = 0; i < employees.size(); i++) 
		{
            if (employees[i].empid == employee.empid) 
			{
                employees[i] = employee;
                return;
            }
        }
    }

    EmployeeType searchItem(string empid) 
	{
        EmployeeType searchedEmployee = {"NULL", "", 0};
        for (int i = 0; i < employees.size(); i++)
		{
            if (employees[i].empid == empid) 
			{
                searchedEmployee = employees[i];
                break;
            }
        }
        return searchedEmployee;
    }

    void listInformation() 
	{
        cout << "Employee List:\n" << endl;
        for (int i = 0; i < employees.size(); i++) 
		{
            cout << "Employee ID: " << employees[i].empid << endl;
            cout << "Name: " << employees[i].name << endl;
            cout << "Salary: " << employees[i].salary << endl;
            cout << endl;
        }
    }
};


int main() 
{
    EmployeeListType employees;

    EmployeeType employee1 = {"C01", "Limited MyAsS", 60000};
    EmployeeType employee2 = {"C02", "Professional Umemployed", 70000};
    employees.addItem(employee1);
    employees.addItem(employee2);

  
    employees.listInformation();

  
    EmployeeType searchedEmployee = employees.searchItem("C01");
    if (searchedEmployee.empid != "NULL") {
        cout << "Searched employee found!" << endl;
        cout << "Name: " << searchedEmployee.name << endl;
    } else {
        cout << "Searched employee not found." << endl;
    }

   
    EmployeeType updatedEmployee = {"C02", "Rock Star", 80000};
    employees.updateItem(updatedEmployee);

   
    employees.deleteItem("C01");

    
    employees.listInformation();

    return 0;
}
