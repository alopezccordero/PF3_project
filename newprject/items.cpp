//—----------------------------------------------Implementation File—---------------------------------------------
#include "items.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

// Definition of the listAllItems member function
// This function opens a text file, reads its content line by line, and prints each line
void Items::listAllItems() {
	string listAll;

	ifstream itemsFile;
	itemsFile.open("items.txt", ios::in);
	if (itemsFile.is_open())
	{
		while (!itemsFile.eof()) {
			getline(itemsFile, listAll);
			cout << listAll << endl;
		}
		itemsFile.close();
	}
	else {
		cout << "Error: File could not be opened" << endl;
	}

}

string Items::getId() {
	return id;
}
string Items::getName() {
	return name;
}
float Items::getPrice() {
	return price;
}
string Items::getDescription() {
	return description;
}



void Items::setItems(string nametemp, string descriptiontemp, float pricetemp, string idtemp) {
	name = nametemp;  //Set the name of the item
	description = descriptiontemp;  //Set the description of the item
	price = pricetemp;  // Set the price of the item
	id = idtemp;  //Set the ID of the item
}


//—-----------------------------------------------------------------------—-------------------------------------------------