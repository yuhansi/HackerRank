#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T, N, K, index;
    cin >> T;
    while(T--) {
        cin >> N >> K;
        if(K >= N / 2) {
            index = 2 * (N - 1 - K);
        }
        else 
            index = 2 * K + 1;
        cout << index << endl;
    }
    return 0;
}