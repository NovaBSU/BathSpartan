#include <iostream>
#include <string>

int main() {
	using namespace std;
	int men = 1;
	int wives = 7;
	int sacks = 7;
	int cats = 7;
	int kittens = 7;

	cout << "As I was going to St. Ives, I met " << men << " man with " << wives << endl;
	cout << "Each wife had " << sacks << " sacks, each sack had " << cats << " cats, each had " << kittens << "kittens" << endl;
	cout << "Kits, cats, sacks and wives," << endl;
	cout << "How many were going to St. Ives" << endl;
	cout << "" << endl;
	cout << "The narrator met " << wives << " wives, who carried " << wives * sacks << " sacks, carrying " << wives * sacks * cats << " cats and " << wives * sacks * cats * kittens << " kittens." << endl;

	return 0;
}