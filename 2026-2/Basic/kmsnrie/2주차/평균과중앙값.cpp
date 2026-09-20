#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    int count[100] = {0}; 

    for (int i = 0; i < 5; i++) {
        int num;
        cin >> num;
        sum += num;
        count[num]++;
    }

    cout << sum / 5 << "\n";

    int total = 0;
    for (int i = 10; i < 100; i += 10) {
        total += count[i];
        if (total >= 3) {
            cout << i << "\n";
            break;
        }
    }

    return 0;
}
