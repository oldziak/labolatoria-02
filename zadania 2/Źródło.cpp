#include <iostream>
using namespace std;
int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	cout << "Podaj c: ";
	cin >> c;
	while (a > b) {
		if (c < b) {
			cout << a << b << c << endl;
			cout << "Najmniejsza liczba: " << c << endl;
		}
		if (c < a) {
			cout << a << c << b << endl;
			cout << "Najmniejsza liczba: " << b << endl;
		}
		if (a < c) {
			cout << c << a << b << endl;
			cout << "Najmniejsza liczba: " << b << endl;
		}
		break;
	}
	while (b > a) {
				if (c < a) {
			cout << b << a << c << endl;
			cout << "Najmniejsza liczba: " << c << endl;
		}
		if (c < b) {
			cout << b << c << a << endl;
			cout << "Najmniejsza liczba: " << a << endl;
		}
		if (b < c) {
			cout << c << b << a << endl;
			cout << "Najmniejsza liczba: " << a << endl;
		}
		break;
	}
	return 0;
}