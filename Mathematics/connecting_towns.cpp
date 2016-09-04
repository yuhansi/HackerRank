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
    while(T--) {
        int N;
        cin >> N;
        long long int num = 1;
        for(int i = 0; i < N - 1; i++) {
            int n;
            cin >> n;
            num = num * n;
            num %= 1234567;
        }
        cout << num << endl;
    }
    return 0;
}