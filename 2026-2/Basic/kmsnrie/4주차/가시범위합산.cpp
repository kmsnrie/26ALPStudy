#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> h(N);              
    for (int i = 0; i < N; i++) {
        cin >> h[i];
    }

    long long total = 0;          
    stack<int> st;                 

    for (int i = 0; i < N; i++) {
        while (!st.empty() && h[st.top()] <= h[i]) {
            total += i - st.top() - 1;   
            st.pop();
        }
        st.push(i);
    }

    while (!st.empty()) {          
        total += N - 1 - st.top();
        st.pop();
    }

    cout << total << "\n";

    return 0;
}
