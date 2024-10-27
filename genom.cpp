#include <iostream>
using namespace std;


int main() {
  int g1, g2, g3, G1, G2, G3, n;
  char c;
  
  do {
  cout << "Unesi 3 broja: " << endl;
  cin >> g1 >> g2 >> g3;
  } while (g1 < 0 || g1 > 1000 || g2 < 0 || g2 > 1000 || g3 < 0 || g3 > 1000);
  
  do {
  cout << "moze jos 3: " << endl;
  cin >> G1 >> G2 >> G3;
  } while (G1 < 0 || G1 > 1000 || G2 < 0 || G2 > 1000 || G3 < 0 || G3 > 1000);
  
  do {
  cout << "transformacija z, p ili d: " << endl;
  cin >> c;
  } while (c != 'z' && c != 'p' && c != 'd');
  
  do {
  cout << "redni br gena za transformaciju od 1 do 3: " << endl;
  cin >> n;
  } while (n < 1 || n > 3);
  
  int pom;
  
  switch(c) {
    case 'z':
      switch(n) {
        case 1: 
          pom = g1;
          g1 = G1;
          G1 = pom;
          break;
        case 2:
          pom = g2;
          g2 = G2;
          G2 = pom;
          break;
        case 3:
          pom = g3;
          g3 = G3;
          G3 = pom;
          break;
      }
      break;
    
    case 'p':
      switch(n) {
        case 1:
          g1 = G1;
          break;
        case 2:
          g2 = G2;
          break;
        case 3:
          g3 = G3;
          break;
      }
      break;
    
    case 'd':
      switch(n) {
        case 1:
          g1 -= G1;
          break;
        case 2:
          g2 -= G2;
          break;
        case 3:
          g3 -= G3;
          break;
      }
      break;
  }
  
  int genom1 = g1 + g2 + g3;
  int GENOM2 = G1 + G2 + G3;
  
  if (genom1 > GENOM2) {
    cout << g1 << " " << g2 << " " << g3 << endl;
    cout << genom1;
  }
  else {
    cout << G1 << " " << G2 << " " << G3 << endl;
    cout << GENOM2;
  }
  
  return 0;
}