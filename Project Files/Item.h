#pragma once
#include <string>

using namespace std;

class Item {
private:
	string label;
	double price;
public:
	void setLabel(string label);
	string getLabel() const;

	void setPrice(double price);
	double getPrice() const;

	Item(string label, double price);
	Item();


};
