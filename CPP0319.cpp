#include <iostream>
#include <string>
using namespace std;

int main() {
    int m, s;
    cin >> m >> s;

    // Tìm số bé nhất
    string min_number(m, '0');
    int s_remaining = s;

    if (s == 0 && m > 1) {
        cout << "-1 -1" << endl;
    } else {
        for (int i = 0; i < m; i++) {
            for (int digit = 0; digit < 10; digit++) {
                if ((i > 0 || digit > 0) && (s_remaining - digit >= 0)) {
                    min_number[i] = '0' + digit;
                    s_remaining -= digit;
                    break;
                }
            }
        }
        if (s_remaining == 0) {
            cout << min_number << " ";
        } else {
            cout << "-1 ";
        }
    }

    // Tìm số lớn nhất
    s_remaining = s;
    string max_number(m, '9');

    for (int i = 0; i < m; i++) {
        for (int digit = 9; digit >= 0; digit--) {
            if (s_remaining - digit >= 0) {
                max_number[i] = '0' + digit;
                s_remaining -= digit;
                break;
            }
        }
    }

    if (s_remaining == 0) {
        cout << max_number << endl;
    } else {
        cout << "-1" << endl;
    }

    return 0;
}