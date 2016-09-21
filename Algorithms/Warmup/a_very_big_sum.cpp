#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    long long num;
    long long sum;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num;
        sum += num;
    }
    cout << sum << endl;
}
