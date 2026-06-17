 #include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int A[N];
        int finalOR = 0;

        for (int i = 0; i < N; i++) {
            cin >> A[i];
            finalOR = finalOR | A[i];
        }

        int currOR = 0;
        int parts = 0;

        for (int i = 0; i < N; i++) {
            currOR = currOR | A[i];

            if (currOR == finalOR) {
                parts++;
                currOR = 0;
            }
        }

        cout << N - parts << endl;
    }

    return 0;
}