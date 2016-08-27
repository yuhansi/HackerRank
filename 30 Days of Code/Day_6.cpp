#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int size;
    cin >> size;
    while (size > 0) {
        string s;
        cin >> s;
        for (int i = 0; i <= s.length() - 1; i++) {
            if (i % 2 == 0) {
                cout << s[i];
            }
        }
        cout << " ";
        for (int j = 0; j <= s.length() - 1; j++) {
            if (j % 2 != 0) {
                cout << s[j];
            }
        }
        cout << endl;
        size++;
    }
    return 0;
}