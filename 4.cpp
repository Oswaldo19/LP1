#include<iostream>
using namespace std;
int main()
{
  int a=0;
  int b=0;
  cout << "Por_favor_ingrese_dos_enteros\n";
  cin>>a>>b;
  if (a<b)
    cout << "max("<< a << "," << b <<")_is_" <<b << "\n";
  else 
    cout << "max(" << a << "," << b <<")_is_" << a << "\n";
}