#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, L;
    cin >> N >> L;

    vector<int> A(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    deque<int> dq;

    for (int i = 1; i <= N; i++) {
        while (!dq.empty() && A[dq.back()] >= A[i]) {
            dq.pop_back();
        }

        dq.push_back(i);

        if (dq.front() < i - L + 1) {
            dq.pop_front();
        }

        cout << A[dq.front()] << " ";
    }
    cout << "\n"; 

    return 0;
}
