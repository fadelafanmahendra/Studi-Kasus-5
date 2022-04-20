#include <iostream>
#include <fstream>
#include "library/input.h"
#include "library/proses.h"
#include "library/output.h"

using namespace std;

int main() {
  int n;
  
  input x;
  x.dataDiri();
  cout << "Masukkan jumlah mata kuliah yang ingin diambil : "; cin >> n;
  x.matKul(1, n);
  x.jmlSks();

  proses y;
  y.Total();

  output z;
  z.cetak();
  cout << "Daftar mata kuliah : " << endl;
  z.cetakMatkul(1, n);
  

  return 0;
}