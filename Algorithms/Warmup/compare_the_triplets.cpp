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

int alice;
int bob;

void compare(int ai, int bi) {
    if(ai > bi) {
        ++alice;
    }
    else if(ai < bi) {
        ++bob;
    }
}

int main() {
    int a0, a1, a2;
    cin >> a0 >> a1 >> a2;
    int b0, b1, b2;
    cin >> b0 >> b1 >> b2;
    compare(a0, b0);
    compare(a1, b1);
    compare(a2, b2);
    cout << alice << " " << bob << endl;
    return 0;
}
