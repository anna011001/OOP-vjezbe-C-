#include <iostream>

using namespace std;

int main() {
    long long int n;

    cin >> n;

    string n_string = to_string(n);
    int string_length = n_string.length();

    int counter_of_ones = 0;

    for (int i = 0; i < string_length; i++) {
        if (n_string[i] == '1')
            counter_of_ones++;
    }

    string m_first_part = "";

    for (int i = 0; i < counter_of_ones; i++) {
        m_first_part += '1';
    }

    string m_second_part = "";

    for (int i = 0; i < string_length - counter_of_ones; i++) {
        m_second_part += '0';
    }

    string m_combined = m_first_part + m_second_part;

    long long int m = stoll(m_combined);

    cout << m << endl;

    return 0;
}