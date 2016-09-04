#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long double L, S1, S2, dS, q, time;
    cin >> L >> S1 >> S2;
    int Q;
    cin >> Q;
    L *= L;
    dS = (S2 > S1) ? S2 - S1 : S1 - S2;
    while(Q--) {
    	cin >> q;
    	time = (sqrt(2 * L) - sqrt(2 * q)) / dS;
        cout.precision(20);
    	cout << time << endl;
    }
    return 0;
}