#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int i = 1;
int j = 1;
class Person {
	public: 
		string name;
		int age;
	virtual void getdata(){};
	virtual void putdata(){};
};
class Professor : public Person {
	public:
		int publication;
		int curId;
	Professor() {
		curId = i;
		i++;
	}
	void getdata() {
		cin >> name;
		cin >> age;
		cin >> publication;
	}
	void putdata() {
		cout << name << " " << age << " " << publication << " " << curId << endl;
	}
};
class Student : public Person {
	public:
		int marks[6];
		int curId;
	Student() {
		curId = j;
		j++;
	}	
	void getdata() {
		cin >> name;
		cin >> age;
		for(int i = 0; i < 6; i++) {
			cin >> marks[i];
		}
	}
	void putdata() {
		int sumScore = 0;
		for(int i = 0; i < 6; i++) {
			sumScore += marks[i];
		}
		cout << name << " " << age << " " << sumScore << " " << curId << endl;
	}
};
int main() {
	int n, val;
	cin >> n; //The number of objects that is going to be created.
	Person *per[n];
	
	for(int i = 0; i < n; i++) {
		cin >> val;
		if(val == 1) {
			// If val is 1 current object is of type Professor
			per[i] = new Professor;
		}
		else
			per[i] = new Student; // Else the current object is of type Student
		
		per[i]->getdata(); // Get the data from the user.
	}
	
	for(int i = 0; i < n; i++) {
		per[i]->putdata(); // Print the required output for each object.
	
	return 0;
	}
	
}