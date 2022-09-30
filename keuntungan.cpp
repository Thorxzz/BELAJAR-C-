#include <iostream>


using namespace std;


int main() {
    double harga, barang, untung;
    
    cout << "Masukkan Harga Barang" << endl;
    cin >> harga;
    cout << "Masukkan Jumlah Barang" << endl;
    cin >> barang;
  
    untung = 30 * harga * barang / 100;
    cout << "Keuntungan Anda Adalah" << endl;
    cout << untung << endl;
    return 0;
}




