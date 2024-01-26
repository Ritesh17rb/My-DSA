#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minimumTurnsToKillMonsters(int N, vector<int>& A) {
    sort(A.begin(), A.end());  // Sort the array in ascending order
    int turns = 0;
    int i = 0;

    while (i < N) {
        int remainingMonsters = N - i;

        if (remainingMonsters == 1) {
            turns++;
            break;
        }

        if (A[i] == 1 && A[i + 1] == 1) {
            turns++;
            i += 2;
        } else {
            turns++;
            i++;
        }
    }

    return turns;
}

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int N;
        cin >> N; // Number of monsters

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i]; // Attacks required to kill each monster
        }

        // Check if all monsters can be killed in a single turn
       
    }
}