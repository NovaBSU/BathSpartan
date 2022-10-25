#include <iostream>
#include <string>
using namespace std;

int main() {
	const int money = 50;
	const int usbPrice = 6;
	int usbTotal = money / usbPrice;
	int totalSpend = usbTotal * usbPrice;
	int remCash = money - totalSpend;

	cout << "The girl buys " << usbTotal << " USB sticks, spending " << char(156) << totalSpend << " and having " << char(156) << remCash << " left over" << endl;

	return 0;
}