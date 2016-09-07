#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <map>
#include <unordered_map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N, Q, counter = 0;
    string input, token, previousTag = "", currentTag, attribute, value;
    map<string, string> database;
    map<string, string>::iterator it;
    cin >> N >> Q;
    for(int i = 0; i <= N; i++) {
    	getline(cin, input);
    	if(input[1] == '/') {
    		int position = 0;
    		bool found = false;
    		for(int j = (int)previousTag.size() - 1; j >= 0; j--) {
    			if(previousTag[j] == '.') {
    				position = (int)j;
    				found = true;
    				break;
    			}
    		}
    		previousTag = found ? previousTag.substr(0, previousTag.size() - 1 - position) : "";
    	}
    	else {
    		stringstream inputString(input);
    		while(getline(inputString, token, ' ')) {
    			if(counter == 0) {
    				token = token[token.size() - 1] == '>' ? token.substr(0, token.size()-1) : token;
    				previousTag += previousTag == "" ? token.substr(1) : "." + token.substr(1);
    				currentTag = previousTag;
    			}
    			else if((counter - 1) % 3 == 0) {
    				attribute = token;
    			}
    			else if(counter % 3 == 0) {
    				value = token[token.size() - 1] == '>' ? token.substr(1, token.size() - 3) : token.substr(1, token.size() - 2);
    				database.insert(make_pair(currentTag + "~" + attribute, value));
    			}
    			counter++;
    		}
    	}
    	counter = 0;
    }
    for(int i = 0; i < Q; i++) {
    		cin >> input;
    		it = database.find(input);
    		if(it != database.end()) {
    			cout << it->second << endl;
    		}
    		else
    			cout << "Not Found!" << endl;
    }
    return 0;
}