/*
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int BoxesCreated, BoxesDestroyed;
*/

//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);
class Box {
	public:
		int length = 0;
		int breadth = 0;
		int height = 0;
		
		Box() {
			BoxesCreated++;
		}
		Box(int l, int b, int h) {
			length = l;
			breadth = b;
			height = h;
			BoxesCreated++;
		}
		Box(Box& b) {
			length = b.length;
			breadth = b.breadth;
			height = b.height;
			BoxesCreated++;
		}
// Destructor
		~Box() {
			BoxesDestroyed++;
		}

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box
	int getLength() {
		return this->length;
	}
	int getBreadth() {
		return this->breadth;
	}
	int getHeight() {
		return this->height;
	}
	long long CalculateVolume() {
		return (long long)length * breadth * height;
	}
//Overload operator < as specified
//bool operator<(Box &b)
	bool operator< (Box& b) {
		if(this->length != b.length)
			return this->length < b.length;
		else if(this->breadth != b.breadth)
			return this->breadth < b.breadth;
		else
			return this->height < b.height;
	}
};
//Overload operator << as specified
//ostream& operator<<(ostream& out, Box B)
ostream& operator<< (ostream& out, const Box b) {
	out << b.length << " " << b.breadth << " " << b.height;
	return out;
}

/*
void check2() {
	int n;
	cin >> n;
	Box temp;
	for(int i = 0; i < n; i++) {
		int type;
		cin >> type;
		if(type == 1) {
			cout << temp << endl;
		}
		if(type == 2) {
			int l, b, h;
			cin >> l >> b >> h;
			Box NewBox(l, b, h);
			temp = NewBox;
			cout << temp << endl;
		}
		if(type == 3) {
			int l, b, h;
			cin >> l >> b >> h;
			Box NewBox(l, b, h);
			if(NewBox < temp) {
				cout << "Lesser" << endl;
			}
			else {
				cout << "Greater" << endl;
			}
		}
		if(type == 4) {
			cout << temp.CalculateVolume() << endl;
		}
		if(type == 5) {
			Box NewBox(temp);
			cout << NewBox << endl;
		}
	}
}

int main() {
	BoxesCreated = 0;
	BoxesDestroyed = 0;
	check2();
	cout << "Boxes Created : " << BoxesCreated << endl << "Boxes Destroyed : " << BoxesDestroyed << endl;
}
*/