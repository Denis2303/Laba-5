#include <iostream>
#include <cmath>
using namespace std;
int main(){
	setlocale(LC_ALL,"rus");
	double a, b, c;
	cout <<"Введите точку А: ";
	cin >> a;
	cout <<"Введите точку C: ";
	cin >> c;
	cout <<"Введите точку B: ";
	cin >> b;
	double ac , bc, abc;
	ac = abs(a - c);
	bc = abs(b - c);
	abc = ac * bc;
	cout << "AC * BC = "<<abc;
}
