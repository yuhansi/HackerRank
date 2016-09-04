#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin >> T;
    int Px, Py, Qx, Qy;
    while(T--) {
        cin >> Px >> Py >> Qx >> Qy;
        cout << (2 * Qx) - Px << " " << (2 * Qy) - Py << endl;
    }
    return 0;
}