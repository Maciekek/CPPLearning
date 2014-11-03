//Napisz funkcjê obliczaj¹c¹ szescian danej liczby.

#include <iostream>
using namespace std;


void testowy() {
	double x;
	cin >> x;
	cout << pow(x, 3);
}

int main() {
	cout << "Podaj wartosc do obliczenia szescianu: " << endl;
	
	testowy();
	cin.get();
}

