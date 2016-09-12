#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, Q;
    map<string, int> m;
    cin >> N;
    while(N--) {
        string s;
        cin >> s;
        if(!m.count(s))
            m[s] = 1;
        else
            m[s]++;
    }
    cin >> Q;
    while(Q--) {
        string s;
        cin >> s;
        if(!m.count(s))
            cout << "0" << endl;
        else
            cout << m[s] << endl;
    }
    return 0;
}
