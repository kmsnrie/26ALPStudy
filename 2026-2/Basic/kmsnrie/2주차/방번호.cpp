#include <iostream> 
#include <string>  

using namespace std;
int main() {
    string N;        
    cin >> N;   

    int count[10] = {0};

    for (int i = 0; i < N.length(); i++) {
        int num = N[i] - '0';
        count[num]++;         
    }

    int six_nine_sets = (count[6] + count[9] + 1) / 2;

    count[6] = six_nine_sets;
    count[9] = six_nine_sets;

    int ans = 0;

    for (int i = 0; i < 10; i++) {
        if (count[i] > ans) {
            ans = count[i];
        }
    }

    cout << ans << "\n";

   return 0;
}
