#include <iostream>
using namespace std;

int main() {
  int a, b;
  
  do {
  cout << "Unesite brojeve a i b: " << endl;
  cin >> a >> b;
  } while (a < 0 || a > 100 || b < 0 || b > 100);
  
  cout << "Uneseni brojevi su: " << a << " " << b << endl;
  
  return 0;
}