#include <iostream>
using namespace std;

int minPens(int N) {
    int pens = 0;
    int denominations[] = {10, 5, 2, 1};

    for (int i = 0; i < 4; i++) {
        pens += N / denominations[i]; // Take as many pens of this denomination as possible
        N %= denominations[i];       // Update the remaining amount
        if (N == 0) break;            // Stop if no money is left
    }
    return pens;
}

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        cout << minPens(N) << endl;
    }

    return 0;
}
