# include <cmath>
#include <iostream>

using namespace std;

int main () {
	float a, b, c, risultato1, risultato2;
	cout << "inserire il valore di a"<< endl;
	cin >> a;
	cout << "inserire il valore di b"<< endl;
	cin >> b;
	cout << "inserire il valore di c"<< endl;
	cin >> c;
	if ((b*b - 4*a*c) < 0) {
		cout << "soluzione non accettabile";
		return 0;
	} else if ((b*b - 4*a*c) == 0) {
		risultato1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
		cout << "x1, = " << risultato1 <<endl;
	}
	risultato1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
	risultato2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
	cout << "x1 = " << risultato1 <<endl;
	cout << "x2 = " << risultato2 <<endl;
	return 0;
}