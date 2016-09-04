#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int r;
    int c;
    cin >> r >> c;
    if(r % 2 == 0) {
        long long int result;
        result = (r / 2) * 10 - 9;
        result += 2 * (c - 1);
        cout << result << endl;
    }
    else if(r % 2 != 0) {
        long long int result;
        result = (r / 2) * 10;
        result += 2 * (c - 1);
        cout << result << endl;
    }
    return 0;
}