#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<string,int> m;
    int N, Q;
    string s;

    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> s;
        m[s]++;
    }
    cin >> Q;
    for(int i = 0; i < Q; i++) {
        cin >> s;
        cout << m[s] << endl;
    }
    return 0;
}
