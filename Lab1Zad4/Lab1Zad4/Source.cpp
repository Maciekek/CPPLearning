//Napisz funkcj� obliczaj�c� pole ko�a o promieniu r.

#include <iostream>
using namespace std;

double count() {
	double r, count;
	cout << "Podaj promie� ko�a: " << endl;
	cin >> r;
	count = 3.14*r*r;
	return count;

}

int main() {
	int x;
	cout << "Witaj w programie obliczajacym pole kola";
	cout << "Wynik: " << count();
	cin >> x;
}


