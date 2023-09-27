/************************************
 * Выполнил: Чепуштанов Е.П.        *
 * Группа: ПИ-231                   *
 * Лаба 1, вариант 25               *
 * https://onlinegdb.com/gPayavs6mn *
*************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double PI = 3.14159265359;
  double m1, a, m2, fi, t, f1, f2, b1, b2;
  
  cout << "Введите m1 = ";
  cin >> m1;
  cout << "Введите a = ";
  cin >> a;
  cout << "Введите m2 = ";
  cin >> m2;
  cout << "Введите fi = ";
  cin >> fi;
  
  t = m2 + m1 * ( sin(fi * PI / 180) * sin(fi * PI / 180) );
  f1 = ( a * m1 * m2 * cos(fi * PI / 180) ) / t;
  f2 = ( a * m2 * (m1 + m2) ) / t;
  b1 = ( a * m1 * sin( 2 * (fi * PI / 180) ) ) / (2 * t);
  b2 = ( a * m2 * sin( 2 * (fi * PI / 180) ) ) / (2 * t);

  cout.precision(6);
  cout << fixed 
       << "f1 = " << f1 << endl
       << "f2 = " << f2 << endl
       << "b1 = " << b1 << endl
       << "b2 = " << b2 << endl;

  return 0;
}
