
//zadanie 1
#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    for (int i = 10; 0 <= i && i <= 10; i=i-2) {
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
    return 0;

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
                    cout >> i >> endl;
                j++;
            }


        }
    }