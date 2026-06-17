#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int M, N;
        cin >> M >> N;

        int ans;

        if (N <= M) {
            ans = M - N;
        } 
        else {
            ans = (N - M) % 2;
        }

        cout << ans << endl;
    }

    return 0;
}