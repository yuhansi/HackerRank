#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    set<int> st;
    int size;
    cin >> size;
    int a, b;
    for(int i = 0 ; i < size; i++) {
    	cin >> a >> b;
    	if(a == 1) {
    		st.insert(b);
    	}
    	else if(a == 2) {
    		st.erase(b);
    	}
    	else if(a == 3) {
    		set<int>::iterator it = st.find(b);
    		if(it == st.end()) {
    			cout << "No" << endl;
    		}
    		else {
    			cout << "Yes" << endl;
    		}
    	}
    }  
    return 0;
}