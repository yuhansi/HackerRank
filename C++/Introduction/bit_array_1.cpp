#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

#define SetBit(A,k)     ( A[(k/32)] |= (1 << (k%32)) )
#define ClearBit(A,k)   ( A[(k/32)] &= ~(1 << (k%32)) )
#define TestBit(A,k)    ( A[(k/32)] & (1 << (k%32)) )

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	unsigned long long N, S, P, Q, num;
	cin >> N >> S >> P >> Q;

	unsigned long long p_231 = static_cast<unsigned long long>(pow(2, 31));
	int *bitarr = new int[p_231 / 32];
	memset(bitarr, 0, sizeof(int) * (p_231 / 32));

	unsigned long long prev = S % p_231;
	SetBit(bitarr, prev);
	unsigned long long result = 1;

	for(unsigned long long i = 1; i < N; i++) {
		num = prev * P + Q;
		prev = num % p_231;

		if(!TestBit(bitarr, prev)) {
			SetBit(bitarr, prev);
			result++;
		}
	}

	cout << result;

	delete[] bitarr;

	return 0;
}
