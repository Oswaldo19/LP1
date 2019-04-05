#include<iostream>
using namespace std;
int main()
{
  if (unit=='i')
    cout << length <<"in_===_" << cm_per_inch*length << "cm\n";
  else if (unit=='c')
    cout << length << "cm_==_" << length/cm_per_inch << "in\n";
  else
    cout<< "Lo_siento_no_conozco_una_unidad_llamada_" << unit << "'\n";
}