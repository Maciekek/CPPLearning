//Prosty kalkulator. U¿ytkownik podaje dwie liczby a i b. Program wylicza ich sumê, ró¿nicê, iloczyn, iloraz oraz wartoœæ (a+sqrt(b))^b.

#include <iostream>


using namespace std;
int main()
{
	int a, b;
	double count;

	cout << "Witaj w programie liczacym a(+sqrt(b))^b" << endl;
	cout << "Podaj wartosc a" << endl;

	cin >> a;
	
	cout << "Podaj wartosc b" << endl;
	cin >> b;

	count = (a + b);
	cout << "Wartosc sumy to: " << count << endl;

	count = (a - b);
	cout << "Wartosc roznicy to: " << count << endl;

	count = (a * b);
	cout << "Wartosc mnozenia to: " << count << endl;
	
	if (b != 0){
		count = (a / b);
		cout << "Wartosc dzielenia to: " << count << endl;
	}
	else {
		cout << "Nie dziele przez 0!";
	}
	

	count = pow(a + sqrt(b),b);
	cout << "Wartosc to: wyrazenia to " << count << endl;
	cin >> b;


	

}