#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> A(N + 1);          
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    stack<int> st;                 

    for (int i = 1; i <= N; i++) {
        while (!st.empty() && A[st.top()] < A[i]) {
            st.pop();             
        }

        if (st.empty()) cout << 0 << " ";
        else cout << st.top() << " ";

        st.push(i);
    }
    cout << "\n";

    return 0;
}
