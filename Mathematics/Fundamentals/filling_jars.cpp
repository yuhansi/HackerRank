#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   \
    long long int N, M, result;
    cin >> N >> M;
    while(M--) {
        long long int a, b, k;
        cin >> a >> b >> k;
        result += k * (b - a + 1);
    }
    cout << result / N << endl;
    return 0;
}