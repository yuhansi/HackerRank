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
    int removeIdx;
    cin >> removeIdx;
    if(removeIdx < v.size()) {
    	v.erase(v.begin() + (removeIdx - 1));
    }
    int removeIdx1, removeIdx2;
    cin >> removeIdx1 >> removeIdx2;
    if(removeIdx1 < removeIdx2 && removeIdx2 < v.size()) {
    	v.erase(v.begin() + (removeIdx1 - 1), v.begin() + (removeIdx2 - 1));
    }
    cout << v.size() << endl;
    for(int i = 0; i < v.size(); i++) {
    	cout << v[i] << " ";
    }
    return 0;
}