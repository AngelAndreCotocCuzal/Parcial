#include <iostream>

using namespace std;

float relacion(float a, float b) {
	int res;
	if (a > b) {
		res = 1;
	}
	else if (a < b) {
		res = -1;
	}
	else {
		res = 0;
	}
	return res;
}
				
int main()
{   //programa principal 
	float a, b;
	cout << "ingrese numero 1: ";
	cin >> a;
	cout << "ingrese numero 2: ";
	cin >> b;
	cout << "La relacion es: " << relacion(a, b) << endl;

	system("pause");
}
