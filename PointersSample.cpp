#include <iostream>

using namespace std;

int main() {

	int *pointerToVar;

	int var = 10;

	pointerToVar = &var;

	cout << &var << endl;

	cout << pointerToVar << endl;

	*pointerToVar = 50;

	cout << var << endl;
	

	system("pause");
	return 0;

}

