/*Perintah Percabangan*/
#include <iostream>

#define motivasi1 "tetap semangat untuk mencapainya!\n";
#define motivasi2 "jangan kendor, dikit lagi bisa dapat A!\n";
#define motivasi3 "jangan pesimis gitu donk! Ayo kamu pasti bisa!\n";
#define motivasi4 "niat kuliahnya dikuatin ya Dek!!\n";
#define motivasi5 "entar ditenggelamkan Bu Susi loh!!\n";

using namespace std;

int main ()
{
  int nilai;
  cout << "Masukkan nilai akhir yang Anda harapkan tercapai di akhir semester {0 s/s 100} = ";
  cin >> nilai;
  
  if (nilai >= 80)
    {
      cout << "\nAnda berharap memperoleh A, " << motivasi1;
    }
  else if (nilai >=70)
    {
      cout << "\nAnda berharap memperoleh B, " << motivasi2;
    }
  else if (nilai >= 60)
    {
      cout << "\nAnda berharap memperoleh C, " << motivasi3;
    }
  else if (nilai >= 40)
    {
      cout << "\nAnda berharap memperoleh D, " << motivasi4;
    }
  else
    {
      cout << "\nAnda berharap memperoleh E, " << motivasi5;
    }

  return 0;
}
