/*
#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;
//Write your code here
*/
class Calculator {
	public: 
		int power(int, int);
};
int Calculator::power(int n, int p) {
	// throw an exception if either one of the number is negative
	if(n < 0 || p < 0) {
		throw runtime_error("n and p should be non-negative");
	}
	// base case 
	else if(p == 0)
		return 1;
	// do recursive call on itself
	else {
		p--;
		return n * power(n, p);
	}
};
/*
int main() {
	Calculator myCalculator = Calculator();
	int T, n, p;
	cin >> T;
	while(T-->0) {
		if(scanf("%d %d", &n, &p) == 2) {
			try {
				int ans = myCalculator.power(n, p);
				cout << ans << endl;
			}
			catch(exception& e) {
				cout << e.what() << endl;
			}
		}
	}
}
*/