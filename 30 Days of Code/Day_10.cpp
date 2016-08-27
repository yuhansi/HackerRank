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


int main() {
    int n;
    cin >> n;
    int count = 0, max = 0, remainder = 0;
    while(n > 0){
        remainder = n % 2;
        n /= 2;
        if(remainder == 1) {
            count++;
            if(count >= max)
            	max = count;
        }
        else
            count = 0;
    }
    cout << max << endl;
    return 0;
}
