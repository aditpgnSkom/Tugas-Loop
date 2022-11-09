#include <iostream>
using namespace std;

int main() {
  long jarak = 0;
  int jarakTambah = 3;
  int waktuTambah = 10;
  int i = 1;

  while(1) {
    
    jarak += jarakTambah;
    
    if(i == waktuTambah) {
      waktuTambah += 10;
      jarakTambah++;
    }

    if(jarak == 100) {
      cout << "Pada jarak 100 M Waktu Yang Diperlukan Adalah " << i << " detik";
      break;
    }

    i++;
  }

  return 0;
}