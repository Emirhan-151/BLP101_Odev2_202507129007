#include <iostream>
using namespace std;

int main() {
    int acı1;
    int acı2;
    int acı3;
    cout <<"Ucgenin 1.kenar uzunluklarini giriniz: ";
    cin >> acı1;
    cout <<"Ucgenin 2.kenar uzunluklarini giriniz: ";
    cin >> acı2;
    cout <<"Ucgenin 3.kenar uzunluklarini giriniz: ";
    cin >> acı3;

    
    if((acı1 + acı2 > acı3) && (acı1 + acı3 > acı2) && (acı2 + acı3 > acı1)){ // Üçgen eşitsizliğine uyuyorsa...
        
        if(acı1 == acı2 && acı2 == acı3){ // Tüm kenarlar eşitse...
            cout << "Eskenar Ucgen" << endl; //ekrana metin yazdirir.
        }
        else if(acı1 == acı2 || acı1 == acı3 || acı2 == acı3){ // İki kenar eşitse...
            cout << "Ikizkenar Ucgen" << endl; //ekrana metin yazdirir.
        }
        else { // Hiçbir kenar eşit değilse...
            cout << "Cesitkenar Ucgen" << endl; //ekrana metin yazdirir.
        }
    } 
    else {                            // Üçgen eşitsizliğine uymuyorsa...
        cout << "Ucgen Olusmaz" << endl; //ekrana metin yazdirir.
    }

    return (0);
}