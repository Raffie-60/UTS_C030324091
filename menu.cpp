#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

const int MAX = 100;
int angka[MAX];
int jumlahData = 0;


void dMenu(){
system("cls");
cout<<"Aplikasi Sorting Insertion"<<"\n";       
cout<<"1. Memasukan data"<<"\n";            
cout<<"2. Menampilkan data"<<"\n";            
cout<<"3. Sorting"<<"\n";           
cout<<"4. Sepatah Kata"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";        

}

void menuInputData() {
    system("cls");
    cout << "Masukkan jumlah data (maksimal " << MAX << "): ";
    cin >> jumlahData;

    if (cin.fail() || jumlahData < 1 || jumlahData > MAX) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Input tidak valid.\n";
        jumlahData = 0;
    } else {
        for (int i = 0; i < jumlahData; i++) {
            cout << "Angka ke-" << (i + 1) << ": ";
            cin >> angka[i];
        }
        cout << "Data berhasil disimpan.\n";
    }

    cout << "Tekan sembarang tombol untuk kembali ke menu...";
    getch();
}
void menuTampilData() {
    system("cls");
    if (jumlahData == 0) {
        cout << "Belum ada data yang dimasukkan.\n";
    } else {
        cout << "Data yang dimasukkan:\n";
        for (int i = 0; i < jumlahData; i++) {
            cout << "Data[" << i + 1 << "] = " << angka[i] << endl;
        }
    }
    cout << "Tekan sembarang tombol untuk kembali ke menu...";
    getch();
}

void sepatahKata(){
  system("cls");
  cout<<"Indonesia Bisa, Kita Juara\n@Poliban";
  getch();
}
int main() {
char pl;
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
    /* code */
    menuInputData();
    break;
   case '2':
    menuTampilData();
    /* code */ 
    break;  
   case '3':
    ("ke- tiga");
    /* code */
    break;  
   case '4':
    sepatahKata();
    /* code */
    break;  
  case '5':
    /* code */
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}