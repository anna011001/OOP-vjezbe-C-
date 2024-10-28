#include <iostream>
#include <iomanip>
#include <string>
#include <climits>

using namespace std;

int main() {
    int n;
    do {
        cin >> n;
    } while (n < 3 || n > 25);

    float d[n];
    int k[n];

    for (int i = 0; i < n; i++) {
        do {
            cin >> d[i] >> k[i];
        } while (d[i] < 1 || d[i] > 1000 || k[i] < 1 || k[i] > 10);
    }
    
    float min_d = d[0];
    int min_k_digits = INT_MAX;
    
    for (int i = 0; i < n; i++) {
        string decimal_str = to_string(d[i]);
        size_t point_index = decimal_str.find('.');
        string decimal_part = decimal_str.substr(point_index + 1); //new substring begins after point
        
        while (decimal_part.length() < k[i]) {
            decimal_part += '0';
        }
        
        int k_digits = stoi(decimal_part.substr(0, k[i])); //begins from 0 of the decimal part and takes assigned k[i] digits
       
        if (k_digits < min_k_digits) {
            min_k_digits = k_digits;
            min_d = d[i];
        }
    }

    cout << fixed << setprecision(2) << min_d << endl;

    return 0;
}