#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        long long K;
        cin >> N >> K;

        vector<long long> A(N);
        long long sum = 0;

        for (int i = 0; i < N; i++) {
            cin >> A[i];
            sum += A[i];
        }

        vector<long long> half(N);

        for (int i = 0; i < N; i++) {
            half[i] = A[i] / 2;
        }

        long long base = sum / 2;
        long long need = K - base;

        sort(half.begin(), half.end());

        long long ans = 0;
        int left = 0;
        int right = N - 1;

        while (left < right) {
            if (half[left] + half[right] > need) {
                ans += right - left;
                right--;
            } else {
                left++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}