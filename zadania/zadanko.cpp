#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int a() {
    int n;
    int m = 0;
    cout << "Podaj szczesliwy numerek: ";
    cin >> n;


    srand(time(0));

    for (int i = 0; i < 10; i++) {
        int liczba = 1 + rand() % 10;
        cout << liczba << " ";
        if (liczba == n) {
            m++;
            cout << "Wylosowano szczesliwy numerek: " << m << " razy. " << endl;
        }
    }

    return 0;
}