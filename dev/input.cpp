#include <iostream>
#include "../library/input.h"

int main()
{
  int n;
  
  input x;
  x.dataDiri();
  cout << "Masukkan jumlah mata kuliah yang ingin diambil : "; cin >> n;
  x.matKul(1, n);
  x.jmlSks();
}