#include <iostream>
using namespace std;
int main() {
	for (int i = 1; i <= 8 ; i++) {
		for (int j = 1; j <= 3; j++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= 9; j++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 0; i <= 0; i++) {
		for (int j = 0; j <= 9; j++) {
			cout << i;	
		}
		cout << endl;
	}
	for (int i = 1; i <= 1; i++) {
		for (int j = 0; j <= 9; j++) {
			cout << i;
		}
		cout << endl;
	}
	for (int i = 2; i <= 2; i++) {
		for (int j = 0; j <= 9; j++) {
			cout << i;
		}
		cout << endl;
	}
	for (int i = 3; i <= 3; i++) {
		for (int j = 0; j <= 9; j++) {
			cout << i;
		}
		cout << endl;
	}
	for (int i = 1; i <= 7; i++) {
		for (int j = 3; j <= 3; j++) {
			cout << "012";
		}
		cout << endl;
	}
}