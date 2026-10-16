#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
	int a = 0;
	int b = 0;
	cout << "Podaj liczbe a; ";
	cin >> a;
	cout << "Podaj liczbe b: ";
	cin >> b;
	if (a > b) {
		for (int i = b; b <= i && i <= a; i++) {
			if (i % 3 == 0) {
				cout << i << endl;
			}
		}
	}
	if (b > a) 	{
		for (int i = a; a <= i && i <= b; i++) {
			if (i % 3 == 0) {
				cout << i << endl;
			}
		}
	}
}