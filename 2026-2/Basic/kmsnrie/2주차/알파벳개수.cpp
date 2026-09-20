#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count[26] = { 0 }; 

    for (int i = 0; i < (int)s.length(); i++) {
        count[s[i] - 'a']++; 
    }

    for (int i = 0; i < 26; i++) {
        cout << count[i] << " ";
    }
    cout << endl;

    return 0;
}
