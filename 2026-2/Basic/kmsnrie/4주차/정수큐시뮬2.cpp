#include <iostream>
#include <string>
using namespace std;

int q[2000001];  

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int head = 0, tail = 0;  

    for (int i = 0; i < N; i++) {
        string cmd;
        cin >> cmd;

        if (cmd == "push") {
            int x;
            cin >> x;
            q[tail] = x;
            tail++;
        }
        else if (cmd == "pop") {
            if (head == tail) {
                cout << -1 << "\n";
            } else {
                cout << q[head] << "\n";
                head++;
            }
        }
        else if (cmd == "size") {
            cout << tail - head << "\n";
        }
        else if (cmd == "empty") {
            if (head == tail) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        else if (cmd == "front") {
            if (head == tail) cout << -1 << "\n";
            else cout << q[head] << "\n";
        }
        else if (cmd == "back") {
            if (head == tail) cout << -1 << "\n";
            else cout << q[tail - 1] << "\n";
        }
    }

    return 0;
}
