<<<<<<< HEAD
#include <iostream>
using namespace std;

int main() {
    int x;
    int y;
    cout <<"x degerini giriniz : ";
    cin >> x;
    cout <<"y degerini giriniz : ";
    cin >> y;

    
    if (x == 0 && y == 0) // noktanın orijinde olup olmadıığına bakar. 
    {
        cout << "Orijin üzerinde " << endl; // nokta orijinde ise ekrana orijin yazar.
    }
    else if (x == 0) { //noktanın eksen üzerinde olup olmadıığına bakar.
        cout << "x Ekseni Uzerinde" << endl; // nokta x ekseninde ise ekrana x Ekseni Uzerinde yazar.
    }

    else if (y == 0) { //noktanın eksen üzerinde olup olmadıığına bakar.
        cout << "y Ekseni Uzerinde" << endl; // nokta y ekseninde ise ekrana y Ekseni Uzerinde yazar.
    }
    
    else if (x > 0 && y > 0) { //noktanın 1.bölgede olup olmadıığına bakar.
        cout << "1. Bolge" << endl; // nokta 1.bölgede ise ekrana 1.bölge yazar.
    }
    else if (x < 0 && y > 0) { //noktanın 2.bölgede olup olmadıığına bakar.
        cout << "2. Bolge" << endl; // nokta 2.bölgede ise ekrana 2.bölge yazar.
    }
    else if (x < 0 && y < 0) { //noktanın 3.bölgede olup olmadıığına bakar.
        cout << "3. Bolge" << endl; // nokta 3.bölgede ise ekrana 3.bölge yazar.
    }
    else if (x > 0 && y < 0) { //noktanın 4.bölgede olup olmadıığına bakar.
        cout << "4. Bolge" << endl; // nokta 4.bölgede ise ekrana 4.bölge yazar.
    }

    return 0;
=======
#include <iostream>
using namespace std;

int main() {
    int x;
    int y;
    cout <<"x degerini giriniz : ";
    cin >> x;
    cout <<"y degerini giriniz : ";
    cin >> y;

    
    if (x == 0 && y == 0) // noktanın orijinde olup olmadıığına bakar. 
    {
        cout << "Orijin üzerinde " << endl; // nokta orijinde ise ekrana orijin yazar.
    }
    else if (x == 0) { //noktanın eksen üzerinde olup olmadıığına bakar.
        cout << "x Ekseni Uzerinde" << endl; // nokta x ekseninde ise ekrana x Ekseni Uzerinde yazar.
    }

    else if (y == 0) { //noktanın eksen üzerinde olup olmadıığına bakar.
        cout << "y Ekseni Uzerinde" << endl; // nokta y ekseninde ise ekrana y Ekseni Uzerinde yazar.
    }
    
    else if (x > 0 && y > 0) { //noktanın 1.bölgede olup olmadıığına bakar.
        cout << "1. Bolge" << endl; // nokta 1.bölgede ise ekrana 1.bölge yazar.
    }
    else if (x < 0 && y > 0) { //noktanın 2.bölgede olup olmadıığına bakar.
        cout << "2. Bolge" << endl; // nokta 2.bölgede ise ekrana 2.bölge yazar.
    }
    else if (x < 0 && y < 0) { //noktanın 3.bölgede olup olmadıığına bakar.
        cout << "3. Bolge" << endl; // nokta 3.bölgede ise ekrana 3.bölge yazar.
    }
    else if (x > 0 && y < 0) { //noktanın 4.bölgede olup olmadıığına bakar.
        cout << "4. Bolge" << endl; // nokta 4.bölgede ise ekrana 4.bölge yazar.
    }

    return 0;
>>>>>>> 44c79c3 (Düzeltmeler)
}