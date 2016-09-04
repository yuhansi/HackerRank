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
        long long int K;
        cin >> K;
        long long int vCut = K / 2;
        long long int hCut = K - vCut;
        cout << vCut * hCut << endl;
    }
    return 0;
}