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
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        if(gcd(abs(a), abs(b)) == gcd(abs(x), abs(y)))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}