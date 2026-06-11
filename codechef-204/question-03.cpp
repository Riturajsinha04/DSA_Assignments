// EVENTUALLY EQUAL
#include<iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long A, B, C;
        cin >> A >> B >> C;

        if (A == B) {
            cout << 0 << endl;
        }
        else if (__gcd(A, C) == __gcd(B, C)) {
            cout << 1 << endl;
        }
        else if (__gcd(A, C + 1) == __gcd(B, C + 1)) {
            cout << 2 << endl;
        }
        else {
            cout << 3 << endl;
        }
    }

    return 0;
}