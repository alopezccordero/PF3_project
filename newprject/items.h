#pragma once
//—----------------------------------------------------Header File—---------------------------------------------------
#include <string>
#ifndef ITEMS_H
#define ITEMS_H

using namespace std;
class Items
{

private:
	string id;
	string name;
	string description;
	float price;

public:

	void listAllItems();
	string getId();
	string getName();
	float getPrice();
	string getDescription();
	void setItems(string, string, float, string);
};

#endif // !ITEMS_H

//—-----------------------------------------------------------------------—-------------------------------------------------