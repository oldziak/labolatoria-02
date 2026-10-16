
//zadanie 1
#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    for (int i = 10; 0 <= i && i <= 10; i = i - 2) {
        cout << i << endl;
    }

    //dla warunku i <= 10 pêtla wyœwietli liczby od 0 do 10 wl¹cznie
    /* podpunkt 2:
     int main() {
    for (int i = 5; 5 <= i && i <= 7; i++) {
        cout << i << endl;
    }

    int main() {
    for (int i = 5; 5 <= i && i < 7; i++) {
        cout << i << endl;
    }
    podpunkt 3:
    int main() {
    for (int i = 0; 0 <= i && i <= 10; i=i+2) {
        cout << i << endl;
    }
    podpunkt 4:
    int main() {
    for (int i = 10; 0 <= i && i <= 10; i=i-2) {
        cout << i << endl;
    }
    */


    //zadanie 2
    {
        int fahr, celsius;
        int start, limit, krok;

        start = 0;
        limit = 200;
        krok = 20;

        fahr = start;
        while (fahr <= limit) {
            celsius = 5 * (fahr - 32) / 9;
            cout << fahr << "\t" << celsius << endl;
            fahr = fahr + krok;
            /*
            kod dla ka¿dej wartoœci faht wiêkszej od 0 i mniejszej od 200, w pêtli while zostanie wykonane
            przeliczenie wed³ug wzoru 5(fahrenheit - 32) /9 a wynik zwiêkszaj¹cy siê o 20 z ka¿dym krokiem zostanie wyœwietlony
            w stopniach celcjusza

            */
        }
    }
    //zadanie 3

    {
        int fahr, celsius;
        int start, limit, krok;

        start = 0;
        limit = 200;
        krok = 20;

        for (fahr = 0.0; fahr <= limit; fahr = fahr + krok) {
            float celsius = 5.0 * (fahr - 32) / 9.0;
            cout << fahr << "\t" << celsius << endl;

        }
    }

    //zadanie 5
    {
        int fahr, celsius;
        int start, limit, krok;

        start = 0;
        limit = 200;
        krok = 20;

        for (fahr = 0.0; fahr <= limit; fahr = fahr + krok) {
            float celsius = 5 * (fahr - 32) / 9;
            cout << fahr << "\t" << celsius << endl;

        }

        /* Program przelicza wartoœci fahrenheit na celcjusz nie uwzglêdniaj¹c czêœci u³amkowych wyniku*/
        //zadanie 6
        {
            int fahr, celsius;
            int start, limit, krok;
            cout << "Podaj krok: ";
            cin >> krok;
            start = 0;
            cout << "Podaj limit: ";
            cin >> limit;

            for (fahr = 0.0; fahr <= limit; fahr = fahr + krok) {
                float celsius = 5 * (fahr - 32) / 9;
                cout << fahr << "\t" << celsius << endl;

            }
        }
        //zadanie 7 
        {
            int j = 0;
            while (j < 10)
            {
                float i = 0;
                cout << "Podaj liczbe: ";
                cin >> i;
                if (i > 0)
                    cout << i << endl;
                j++;
            }


        }
    }
    //zadanie 8
    {
        int parzyste = 0;
        while (0 <= parzyste && parzyste < 100) {
            parzyste = parzyste + 2;
            cout << parzyste << endl;
        }
    }
}
//zadanie 9
{
    int n = 0;
    cout << "Podaj liczbe: ";
    cin >> n;
    for (int i = 0;i <= 100; i++) {
        if (i % n == 0) {
            cout << i << endl;
        }
    }
}
//zadanie 10 
{
    int n = 0;
    int l = 0;
    cout << "Podaj liczbe: ";
    cin >> n;
    for (int i = 0; i >= 0 && i <= 100; i++) {
        if (i % n == 0) {
            l++;
        }
    }
    cout << "W przedziale [0,100] jest " << l << " liczb podzielnych przez " << n << endl;
}
// zadanie 11
{
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
    if (b > a) {
        for (int i = a; a <= i && i <= b; i++) {
            if (i % 3 == 0) {
                cout << i << endl;
            }
        }
    }
}
//zadanie 13
{
    int i = 100;
    while (i >= 0 && i <= 100) {
        cout << i << endl;
        i = i - 1;
    }
}
//zadanie 14
{
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
//zadanie 15
 {
    int n, m;

    cout << "Podaj n: ";
    cin >> n;

    cout << "Podaj m: ";
    cin >> m;

    srand(time(0));

    for (int i = 0; i < n; i++) {
        int liczba = rand() % (m + 1);
        cout << liczba << " ";
    }

    return 0;
}
 //zadanie 16
 {
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