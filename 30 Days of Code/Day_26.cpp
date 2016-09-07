#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int day, month, year;
    int dueday, duemonth, dueyear;
    cin >> day >> month >> year;
    cin >> dueday >> duemonth >> dueyear;
    int fine = 0;
    if(year > dueyear) {
        fine = 10000;
    } 
    else if(year == dueyear) {
        if(month > duemonth) {
            fine = (month - duemonth) * 500;
        } 
        else if(month == duemonth) {
            if(day > dueday) {
            	fine = (day - dueday) * 15;
            }
        }
    }
    cout << fine << endl;
    return 0;
}
