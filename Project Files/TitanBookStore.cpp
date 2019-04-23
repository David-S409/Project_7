#include "TitanBookStore.h"
#include "Item.h"

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//finds sum of items purchased (recursion)
double TitanBookstore::sum_of_purchases(int index) {
	if (index == this->_current_index)
		return this->_purchases[index].getPrice();

	return sum_of_purchases(index + 1) + this->_purchases[index].getPrice();
}


	Item * TitanBookstore::getPurchases(){ return this->_purchases; }

	TitanBookstore::TitanBookstore() {
	}

	//constructor
	TitanBookstore::TitanBookstore(int numOfItems){
		this->_current_index = 0;
		this->_purchases = new Item[numOfItems];
	}

	TitanBookstore::~TitanBookstore(){
		delete [] this->_purchases;
	}

	//adds item to arry of purchases
	void TitanBookstore::add_item(Item purchase){
		this->_purchases[this->_current_index++] = purchase;
	}

	void TitanBookstore::show_total(){
		//displays items with price
		cout << "# of items: " << _current_index << endl;
		cout << fixed << setprecision(2);
		for (int i = 0; i < this->_current_index; i++) {
			cout << " " << this->_purchases[i].getLabel() << " - $" << this->_purchases[i].getPrice() << endl;
		}

		//finds total
		cout << "Total price: " << this->sum_of_purchases(0) << endl;

	}
