#include <iostream>
using namespace std;

int main(){
    cout <<"1-1000 arasi Armstrong Sayilari: "<<endl;
    int sayi1;
    int toplam;
    int basamak; 
    
    for (int i = 1; i <= 1000; i++){  //1'den 1000'e kadar döngü oluşturur.
        sayi1 = i;                    //sayiyi sayi1'e atar.
        toplam = 0;                   //toplamı sıfırlar.
    
        while (sayi1 > 0){                 //sayının basamakları üzerinde döngü oluşturur.
            basamak = sayi1 % 10;          // Son basamağı alır.
            toplam += (basamak * basamak * basamak);  //sayının küpünü toplama ekler.
            sayi1 = sayi1 / 10;       // Sayıyı bir basamak küçültür.
        }

        if (toplam == i){   // Eğer toplam orijinal sayıya eşitse...
            cout << i << " ";  //ekrana metin yazdirir.
        }
    }
    return (0);
}