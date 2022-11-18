# include <iostream>

using namespace std;

int main (){
	int prodotto;
	cout << "***********************" << endl;
	cout << "**1 - CAFFE'         ** " << endl;
	cout << "**2 - CAPPUCCINO     **" << endl;
	cout << "**3 - TE'            **" << endl;
	cout << "**4 - MOCCACCINO     **" << endl;
	cout << "**5 - GINSENG        **" << endl;
	cout << "**6 - CIOCCOLATA     **" << endl;
	cout << "**7 - LATTE          ** " << endl;
	cout << "**8 - BICCHIERE      **" << endl;
	cout << "***********************" << endl;
	cout << "inserire il numero del prodotto" << endl;
	cin >> prodotto;
	switch (prodotto){
		case 1:
		case 2:
			cout << "costa 50 cent";
			break;
		case 3:
			cout << "costa 45 cent";
			break;
		case 4:
			cout << "costa 55 cent";
			break;
		case 5:
			cout << "costa 75 cent";
			break;
		case 6:
			cout << "costa 80 cent";
			break;
		case 7:
			cout << "costa 30 cent";
			break;
		case 8:
			cout << "costa 5 cent";
			break;
		default:
			cout << "prodotto non esistente";
	}
	return 0;
}
