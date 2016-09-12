#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int N = 0, Q = 0;
    long long int lastAns = 0;
    long long int x = 0, y = 0;
    int type, index;
    cin >> N >> Q;
    vector<vector<long long int> > seqList (N, vector<long long int>(0));
    for(int i = 0; i < Q; i++) {
        cin >> type >> x >> y;
        switch(type) {
            case 1:
                index = ((x ^ lastAns) % N);
                seqList.at(index).push_back(y);
            break;
            case 2:
                index = ((x ^ lastAns) % N);
                int size = seqList.at(index).size();
                lastAns = seqList.at(index).at(y % size);
                cout << lastAns << endl;
        }
    }
    return 0;
}
