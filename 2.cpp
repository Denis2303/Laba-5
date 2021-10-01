#include <iostream>
#include <cmath>
using namespace std;
int main(){
	setlocale(LC_ALL,"rus");
	double a, b, c;
	cout <<"Введите точку А: ";
	cin >> a;
	cout <<"Введите точку B: ";
	cin >> b;
	cout <<"Введите точку C: ";
	cin >> c;
	double ac , bc, abc;
	ac = abs(a - c);
	bc = abs(b - c);
	abc = ac + bc;
	cout << "АС = " <<ac<<endl;
	cout << "BC = " << bc << endl;
	cout << "AC + BC = "<<abc;
}
