#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin >> T;
    for(int i = 0; i < T; i++) {
        unsigned long long int num;
        cin >> num;
        num %= 1000000007;
        unsigned long long int res;
        res = num * num % 1000000007;
        cout << res << endl;
    }
    return 0;
}
