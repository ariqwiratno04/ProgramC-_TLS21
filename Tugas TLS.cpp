#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

 //Ruby_Ariq Naufal Fakri Wiratno
 // Daftar Belanja C++ Sederhana


int main()
{
    int jumlah_barang, i, harga_item[20], jumlah_item[20], sub_total[20];
    string nama_item[20];
    int total;

    cout << "DAFTAR BELANJA C++" << endl;
    cout << "---------------------- \n";
    cout << "Masukkan jumlah barang yang dibeli: ";
    cin >> jumlah_barang;
    cout << endl;

    for(i = 0; i < jumlah_barang; i++){
        cout << "Masukkan nama item ke " << i + 1 << ": ";
        cin >> nama_item[i];

        cout << "Masukkan harga item (dalam rupiah): ";
        cin >> harga_item[i];

        cout << "Masukkan jumlah item yang akan dibeli: ";
        cin >> jumlah_item[i];
        cout << endl;

        sub_total[i] = jumlah_item[i] * harga_item[i];
        total += sub_total[i];

    }

    cout << endl;
    cout << "LIST BARANG YANG DIBELI" << endl;
    cout << "------------------------------------------------ \n";
    cout << "------------------------------------------------ \n";
    cout << "No     " << "Nama Barang   " << "Jumlah    " << "Harga     " << "Sub Total     " << endl;
    cout << "------------------------------------------------ \n";
    for (i = 0; i < jumlah_barang; i++){
    cout << i + 1 << setw(12) << nama_item[i] << setw(11) << jumlah_item[i] << setw(12) << harga_item[i] << setw(11) << sub_total[i] << endl;;
    }
    cout << endl;
    cout << "Uang yang harus disiapkan untuk belanja: Rp." << total <<",00" << endl;
return 0;
}
