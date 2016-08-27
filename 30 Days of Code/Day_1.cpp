#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
	int i = 4;
	double d = 4.0;
	string s = "HackerRank ";
	
	// Declare second integer, double, and String variables.
   	int j;
   	double e;
   	string s2;
   	// Read and save an integer, double, and String to your variables.
   	cin >> j;
   	cin >> e;
   	cin.ignore();
   	getline(cin, s2);
   	// Print the sum of both integer variables on a new line.
   	cout << i + j << endl;
   	// Print the sum of the double variables on a new line.
   	cout << fixed << setprecision(1) << e + d << endl;
   	// Concatenate and print the String variables on a new line
   	// The 's' variable above should be printed first.
   	cout << s + s2 << endl;
   
   	return 0;
}
