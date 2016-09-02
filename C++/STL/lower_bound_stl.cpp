#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> v;
    int size;
    cin >> size;
    int a;
    for(int i = 0; i < size; i++) {
    	cin >> a;
    	v.push_back(a);
    }
    int queries;
    cin >> queries;
    int val;
    for(int i = 0; i < queries; i++) {
    	cin >> val;
    	vector<int>::iterator low = lower_bound(v.begin(), v.end(), val);
    	if(v[low - v.begin()] == val) {
    		cout << "Yes " << (low - v.begin() + 1) << endl;
    	}
    	else {
    		cout << "No " << (low - v.begin() + 1) << endl;
    	}
    }
    return 0;
}