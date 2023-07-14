#include <iostream>
using namespace std;

struct ListType {
  int element[100];
  int listLength;
};

void AddItem(ListType& list, int elem) {
  if (list.listLength < 100) {
    list.element[list.listLength] = elem;
    list.listLength++;
    cout << "Item added successfully.\n";
  } else {
    cout << "List is full, cannot add item.\n";
  }
}

void DeleteItem(ListType& list, int elem) {
  int index = -1; // assuming item not found
  for (int i = 0; i < list.listLength; i++) {
    if (list.element[i] == elem) {
      index = i;
      break;
    }
  }
  if (index != -1) {
    for (int i = index; i < list.listLength - 1; i++) {
      list.element[i] = list.element[i + 1];
    }
    list.listLength--;
    cout << "Item deleted successfully.\n";
  } else {
    cout << "Item not found in the list.\n";
  }
}

void UpdateItem(ListType& list, int elem, int newitem) {
  int index = -1; // assuming item not found
  for (int i = 0; i < list.listLength; i++) {
    if (list.element[i] == elem) {
      index = i;
      break;
    }
  }
  if (index != -1) {
    list.element[index] = newitem;
    cout << "Item updated successfully.\n";
  } else {
    cout << "Item not found in the list.\n";
  }
}

int SearchItem(ListType list, int elem) 
{
  for (int i = 0; i < list.listLength; i++) 
  {
    if (list.element[i] == elem) 
	{
      return i; 
    }
		return -1; 
	}
}
int main() 
{
	ListType list;
	list.listLength = 0;
	
	cout << "Enter number of elements: ";
	cin >> list.listLength;
	cout << "Enter " << list.listLength << " element(s):\n";
	for (int i = 0; i < list.listLength; i++) 
	{
	cout << "  Element " << i + 1 << ": ";
	cin >> list.element[i];
	}

	cout << "Original list: ";
	for (int i = 0; i < list.listLength; i++) 
	{
	cout << list.element[i] << " ";
	}
	cout << endl;
	
	int elem, newitem;
	cout << "Enter item to add: ";
	cin >> elem;
	AddItem(list, elem);
	cout << "List after adding item: ";
	for (int i = 0; i < list.listLength; i++) 
	{
	cout << list.element[i] << " ";
	}
	cout << endl;
	
	cout << "Enter item to delete: ";
	cin >> elem;
	DeleteItem(list, elem);
	cout << "List after deleting item: ";
	for (int i = 0; i < list.listLength; i++) 
	{
	cout << list.element[i] << " ";
	}
	cout << endl;
	
	cout << "Enter item to update: ";
	cin >> elem;
	cout << "Enter new value: ";
	cin >> newitem;
	UpdateItem(list, elem, newitem);
	cout << "List after updating item: ";
	for (int i = 0; i < list.listLength; i++) 
	{
	cout << list.element[i] << " ";
	}
	cout << endl;
	
	cout << "Enter item to search: ";
	cin >> elem;
	int index = SearchItem(list, elem);
	if (index != -1) 
	{
	cout << "Item found at index " << index << ".\n";
	} 
	else 
	{
	cout << "Item not found in the list.\n";
	}

return 0;
}
