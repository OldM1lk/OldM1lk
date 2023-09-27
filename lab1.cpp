/**********************************
 * Выполнил: Чепуштанов Е.П.
 * Лаба 1, вариант 25
 * https://onlinegdb.com/Qhehw6bX2
***********************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  
  double m1 = 15;
  double a = 18;
  double m2 = 2.7;
  double fi = 26;
  double PI = 3.14159265359;
  double t, f1, f2, b1, b2;
  
  t = m2 + m1 * ( sin(fi * PI / 180) * sin(fi * PI / 180) );
  f1 = ( a * m1 * m2 * cos(fi * PI / 180) ) / t;
  f2 = ( a * m2 * (m1 + m2) ) / t;
  b1 = ( a * m1 * sin( 2 * (fi * PI / 180) ) ) / (2 * t);
  b2 = ( a * m2 * sin( 2 * (fi * PI / 180) ) ) / (2 * t);
  
  cout.precision(6);
  cout << fixed << f1 << endl;
  cout << fixed << f2 << endl;
  cout << fixed << b1 << endl;
  cout << fixed << b2 << endl;
  
  return 0;
}
