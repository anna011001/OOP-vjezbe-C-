#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
  char c;
  int n;
  
  cin >> c;
  
  do {
    cin >> n;
  } while (n < 1000 || n > 9999);
  
  int kvadrat = pow(n, 2);
  
  int z1 = kvadrat % 10;
  int z2 = (kvadrat % 100) / 10;
  
  float korjen = sqrt(n);
  korjen = korjen * 100;
  
  int pomoc = korjen;
  int z3 = pomoc % 10;
  int z4 = (pomoc % 100) / 10;
  
  
  cout << c << c << c << c << c << c << c << c << endl;
  cout << c << "      " << c << endl;
  cout << c << " " << z2 << z1 << z4 << z3 << " " << c << endl;
  cout << c << "      " << c << endl;
  cout << string(8, c) << endl;
  
  return 0;
}