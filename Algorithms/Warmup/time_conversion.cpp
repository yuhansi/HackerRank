#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    string time;
    cin >> time;
    string output = time.substr(0, 8);
    string ampm = time.substr(time.size() - 2);
    string hourS = time.substr(0, 2);
    if(ampm == "AM" && hourS == "12") {
        hourS = "00";
        output.replace(0, 2, hourS);
    }
    else if(ampm == "PM" && hourS != "12") {
        int hour = stoi(hourS);
        hour = (hour + 12) % 24;
        string hours = to_string(hour);
        string c = hours;
        output.replace(0, 2, c);
    }
    cout << output << endl;
    return 0;
}
