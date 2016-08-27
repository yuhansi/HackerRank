#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	double mealCost;
	int tipPercent;
	int taxPercent;
	cin >> mealCost >> tipPercent >> taxPercent;
	double tip = mealCost * ((double)tipPercent / 100);
	double tax = mealCost * ((double)taxPercent / 100);
	double totalCost = mealCost + tip + tax;
	cout << "The total meal cost is " << round(totalCost) << " dollars." << endl;
	
	return 0;
}