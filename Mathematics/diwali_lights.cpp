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
        int result = 1;
        for(int i = 0; i < N; i++) {
            result *= 2;
            if(i == N - 1)
                result -= 1;
            result %= 100000;
        }
        cout << result << endl;
    }
    return 0;
}