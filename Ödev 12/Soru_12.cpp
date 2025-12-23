#include <iostream>
using namespace std;

int main(){
    int n;
    cout <<"toplamlarini istediginiz sayi = ";
    cin >> n;
    int toplam=0;

    for(int i=0; i<=n; i++ ){   //kullanıcının girdiği değere gelene kadar i değerini 1 arttıran döngü.
    
        toplam=toplam+i;
        
    }
    cout << "Toplam = " << toplam <<endl;
    return(0);
}