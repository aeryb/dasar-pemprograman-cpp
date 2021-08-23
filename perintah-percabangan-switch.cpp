/*Perintah Percabangan*/
#include <iostream>

using namespace std;

int main ()
{
  char pilihan;
  int luas, keliling;
  int sisi, tinggi;
  
  cout << "Masukkan pilihan untuk menghitung luas dan keliling bangun datar";
  puts ("A = Segitiga Sama Sisi");
  puts ("B = Bujur Sangkar");

  cout << "Masukkan pilihan Anda (A atau B) = ";
  cin >> pilihan;
  
  switch (pilihan) {
        case 'A' :  
        case 'a' :
                    cout << "Menghitung Luas dan Keliling Segitiga" << endl;
                    cout << "Masukkan Panjang Sisi = ";
                    cin >> sisi;
                    cout << "Masukkan Tinggi = ";
                    cin >> tinggi;
                    cout << "Luas Segitiga adalah " << 0.5*sisi*tinggi << endl;
                    cout << "Keliling Segitiga adalah " << 3*sisi << endl;
        break;
        case 'B' :  
        case 'b' :
        cout << "Menghitung Luas dan Keliling Bujur Sangkar" << endl;
                    cout << "Masukkan Panjang Sisi = ";
                    cin >> sisi;
                    cout << "Luas Segitiga adalah " << sisi*sisi << endl;
                    cout << "Keliling Segitiga adalah " << 4*sisi << endl;
        break;
        default :   puts ("Pilihan yang Anda masukkan salah!\n");
        
  }
  
  return 0;
}
