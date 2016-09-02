/*
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int T;
	cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	whiel(T--) {
		double A;
		cin >> A;
		double B;
		cin >> B;
		double C;
		cin >> C;
		/* Enter your code here */
		cout << setw(0) << "0x" << nouppercase << hex << (long)A << endl;
		string integer = to_string(abs((int)B));
		if(B > 0) {
			cout << setw(15 - (integer.length() + 3)) << setfill('_') << fixed << setprecision(2) << "+" << B << endl;
		}
		else {
			cout << setw(15) << setfill('_') << fixed << setprecision(2) << "-" << B << endl;
		}
		cout << setprecision(9) << uppercase << fixed << scientific << C << endl;
/*
	}
	return 0;
	
}
*/