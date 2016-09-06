#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T, n;
    bool flag;
    cin >> T;
    while(cin >> n) {
        if(n == 1) {
        cout << "Not prime" << endl;
        continue;
        }
        flag = true;
        for(int i = 2; i <= sqrt(n); i++) {
            if(n % i == 0) {
                flag = false;
                break;
            }
        }
        if(flag == false)
            cout << "Not prime" << endl;
        else
            cout << "Prime" << endl;
    }
    return 0;
}