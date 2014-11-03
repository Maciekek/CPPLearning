#include <iostream>
#include <string>
using namespace std;
int main(){
	int cols = 80;
	string text;
	int textLength, positionStart;

	cout << "Podja jakis tekst" << endl;
	cin >> text;
	cout << "twoj tekst: " << text << endl;

	positionStart = cols - text.length();
	positionStart = positionStart/2;

	for (int i = 0; i < positionStart; i++){
		cout << " ";
	}
	cout << text;
	cin >> text;



}