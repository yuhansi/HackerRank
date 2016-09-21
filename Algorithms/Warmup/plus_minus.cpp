#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    int number;
    cin >> number;
    int array[100];
    int positive = 0;
    int zeros = 0;
    int negative = 0;
    for(int i = 0; i < number; i++) {
        cin >> array[i];
        if(array[i] > 0)
            positive++;
        else if(array[i] == 0)
            zeros++;
        else if(array[i] < 0)
            negative++;
    }
    cout << setprecision(5) << (positive / (1.0 * number)) << endl;
    cout << setprecision(5) << (negative / (1.0 * number)) << endl;
    cout << setprecision(5) << (zeros / (1.0 * number)) << endl;

    return 0;
}
