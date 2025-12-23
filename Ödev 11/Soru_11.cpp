#include <iostream>
using namespace std;

int main(){
    int n=0;
    cout << "kaca kadar yazdirmak istiyorsunuz : "; //ekrana girilen metini yazdırır.
    cin >> n; //kullanıcıdan 1 sayı alır
    

    for(int i=1; i<=n; i++ ){   //kullanıcının girdiği sayıya gelene kadar i değerini 1 arttıran döngü.
        
        cout << i <<" "; // i değerini ekrana yazdırır.


    }

return(0);

}