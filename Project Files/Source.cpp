#include <iostream>
#include <string>

#include "Item.h"
#include "TitanBookStore.h"
using namespace std;

int main() {
	TitanBookstore myPurchases(3);

	Item book("Starting Out with C++ Early Objects", 76.50);
	myPurchases.add_item(book);

	Item t_shirt("Fullerton 1957", 24.99);
	myPurchases.add_item(t_shirt);

	Item hat("CSUF", 15.99);
	myPurchases.add_item(hat);

	myPurchases.show_total();


	return 0;
}
