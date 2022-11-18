# include <iostream>

using namespace std;

int main (){
	int voto;
	cout << "inserire voto:" << endl;
	cin >> voto;
	switch (voto){
		case 4:
			cout << "gravemente insufficiente";
			break;
		case 5:
			cout << "insufficiente";
			break;
		case 6:
			cout << "sufficiente";
			break;
		case 7:
			cout << "sette";
			break;
		case 8:
			cout << "otto";
			break;
		case 9:
			cout << "nove";
			break;
		case 10:
			cout << "dieci";
			break;
		default:
			cout << "voto non riconosciuto";
	}
	return 0;
}