#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string, int> m;
    int size;
    cin >> size;
    int a, marks;
    string name;
    for(int i = 0; i < size; i++) {
    	cin >> a;
    	cin >> name;
    	if(a == 1) {
    		cin >> marks;
    		map<string, int>::iterator it = m.find(name);
    		if(it == m.end()) {
    			m.insert(make_pair(name, marks));
    		}
    		else {
    			m[name] += marks;
    		}
    	}
    	else if(a == 2) {
    		m.erase(name);
    	}
    	else if(a == 3) {
    		map<string, int>::iterator it = m.find(name);
    		if(it == m.end()) {
    			cout << "0" << endl;
    		}
    		else {
    			cout << m[name] << endl;
    		}
    	}
    }
    return 0;
}