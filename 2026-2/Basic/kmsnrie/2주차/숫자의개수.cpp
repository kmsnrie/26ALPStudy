#include <iostream>
#include <string>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int result = A * B * C;

    string res_string = to_string(result);

    int count[10] = {0};

    for (int i = 0; i < res_string.length(); i++) {
        int num = res_string[i] - '0';
        count[num]++;
    }
    for (int i = 0; i < 10; i++) {
        cout << count[i] << "\n";
    }

    return 0;
} 
