#include <iostream>
#include <conio.h>
using namespace std;

int main(){

	int x;
	int y;
	int product;
	cout << "Pick 2 numbers to multiply:" << endl;
	cin >> x;
	cin >> y;
	cout << endl;
	product = x * y;
	cout << "The product is: " << product;
	_getch();
	return 0;
}