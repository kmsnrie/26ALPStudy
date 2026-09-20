#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    queue<int> q;

    for (int i = 1; i<=N; i++) {
        q.push(i);
    }

    cout << "<";

    while (!q.empty()) {
        for (int i = 0; i < K - 1; i++) {
            int front_num = q.front();
            q.pop();
            q.push(front_num);
        }

        cout << q.front();
        q.pop();

        if (!q.empty()) {
            cout << ", ";
        }
    }
    
    cout << ">\n";

    return 0;
    
    }
