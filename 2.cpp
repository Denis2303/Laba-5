#include <iostream>
#include <cmath>
using namespace std;
int main(){
	setlocale(LC_ALL,"rus");
	double a, b, c;
	cout <<"������� ����� �: ";
	cin >> a;
	cout <<"������� ����� B: ";
	cin >> b;
	cout <<"������� ����� C: ";
	cin >> c;
	double ac , bc, abc;
	ac = abs(a - c);
	bc = abs(b - c);
	abc = ac + bc;
	cout << "�� = " <<ac<<endl;
	cout << "BC = " << bc << endl;
	cout << "AC + BC = "<<abc;
}
