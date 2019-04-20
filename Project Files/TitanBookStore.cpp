#include "TitanBookStore.h"
#include "Item.h"

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double TitanBookstore::sum_of_purchases(int numOfItems){

	return 0.0;
}

	double TitanBookstore::sum_of_purchases(int)
	{
		return 0.0;
	}

	Item * TitanBookstore::getPurchases(){ return this->_purchases; }

	TitanBookstore::TitanBookstore() {
	}

	TitanBookstore::TitanBookstore(int numOfItems){
		this->_current_index = 0;
		this->_purchases = new Item[numOfItems];
	}

	TitanBookstore::~TitanBookstore(){
		delete [] this->_purchases;
	}

	void TitanBookstore::add_item(Item purchase){
		
		this->_purchases[this->_current_index++] = purchase;
	}

	void TitanBookstore::show_total(){
		
		cout << "# of items: " << _current_index << endl;
			// TO BE COMPLETED
			//Display all purchases with item name and price for each
		cout << fixed << setprecision(2);
		for (int i = 0; i < this->_current_index; i++) {
			cout << " " << this->_purchases[i].getLabel() << " - $" << this->_purchases->getPrice() << endl;
		}

		cout << "Total price: " << this->sum_of_purchases(this->_current_index) << endl;

	}
