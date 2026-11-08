#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<int> ans(N, -1); 
    stack<int> st;             

    for (int i = 0; i < N; i++) {
        
        while (!st.empty() && A[st.top()] < A[i]) {
            ans[st.top()] = A[i];
            st.pop();
        }
        
        st.push(i);
    }

    for (int i = 0; i < N; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";

    return 0;
}
