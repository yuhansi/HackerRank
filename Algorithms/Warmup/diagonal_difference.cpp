#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int addToSum(int sum, int value) {
    return sum += value;
}

int main() {
    int n;
    cin >> n;
    int firstDiagSum = 0;
    int secondDiagSum = 0;
    int row = 0;

    for(int i=0; i<n*n; i++) {
        int value;
        cin >> value;
        if(i % n == row)
            firstDiagSum = addToSum(firstDiagSum, value);
        if(i % n == (n - 1) - row)
            secondDiagSum = addToSum(secondDiagSum, value);
        if(i % n == n - 1) {
            row++;
        }
    }
    int result = abs(firstDiagSum - secondDiagSum);
    cout << result;
    return 0;
}
