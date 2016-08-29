/*
#include <iostream>
using namespace std;
enum class Fruit { apple, orange, pear };
enum class Color { red, green, orange };

template <typename T> struct Traits;
*/

// Define specializations for the Traits class template here.
template <> struct Traits <Fruit> {
	static string name(int n) {
		string s[3] = {"apple", "orange", "pear"};
		if(n >= 0 && n < 3)
			return s[n];
		else
			return "unknown";
	}
};
template <> struct Traits <Color> {
	static string name(int n) {
		string s[3] = {"red", "green", "orange"};
		if(n >= 0 && n < 3)
			return s[n];
		else
			return "unknown";
	}
};

/*
int main() {
	int t = 0;
	std::cin >> t;
	
	for(int i = 0; i != t; ++i) {
		int index1;
		std::cin >> index1;
		int index2;
		std::cin >> index2;
		cout << Traits<Color>::name(index1) << " ";
		cout << Traits<Fruit>::name(index2) << "\n";
	}
}
*/