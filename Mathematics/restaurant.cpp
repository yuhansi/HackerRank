#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin >> T;
    while(T--) {
        int l, b;
        cin >> l >> b;
        int n = gcd(l, b);
        cout << (l * b) / (n * n) << endl;
    }
    return 0;
}