#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

void maxAnd(int n, int k) {
    int tmp = 1;
    vector<int> v;
    while(tmp < n) {
        for(int i = 0; i < n + 1; i++) {
            if(tmp < i) {
                if((tmp & i) < k) {
                    v.push_back(tmp & i);
                }
            }
        }
        tmp++;
    }
    double max = *max_element(v.begin(), v.end());
    cout << max << endl;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        maxAnd(n, k);
    }
    return 0;
}
