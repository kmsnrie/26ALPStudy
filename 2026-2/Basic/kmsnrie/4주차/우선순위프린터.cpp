#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        vector<int> pr(N);
        for (int i = 0; i < N; i++) {
            cin >> pr[i];
        }

        deque<int> dq;
        for (int i = 0; i < N; i++) {
            dq.push_back(i);          
        }

        int order = 0;               

        while (!dq.empty()) {
            int cur = dq.front();

            bool found = false;
            for (int j = 1; j < (int)dq.size(); j++) {
                if (pr[dq[j]] > pr[cur]) {
                    found = true;
                    break;
                }
            }

            if (found) {
                dq.pop_front();
                dq.push_back(cur);    
            } else {
                dq.pop_front();   
                order++;
                if (cur == M) {
                    cout << order << "\n";
                    break;
                }
            }
        }
    }

    return 0;
}
