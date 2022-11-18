# include <iostream>

using namespace std;

int main () {
	float peso;
	do {
		cout << "inserisci peso in kg" << endl;
		cin >> peso;
	} while (peso <= 0);
	cout << "sono " << peso * 1000 << " grammi";
	return 0;
}