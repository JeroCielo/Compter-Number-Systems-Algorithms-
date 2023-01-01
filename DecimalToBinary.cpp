# include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int res[50] = {};

    int cnt = 0;
    while(n > 0) {
        res[cnt] = n % 2;
        cnt ++;
        n /= 2;
    }

    for(int i = cnt - 1; i >= 0; i--) {
        cout << res[i];
    }
}
