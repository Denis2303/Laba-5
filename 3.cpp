#include <iostream>
#include <cmath>
using namespace std;
int main(){
	setlocale(LC_ALL,"rus");
	double a, b, c;
	cout <<"������� ����� �: ";
	cin >> a;
	cout <<"������� ����� C: ";
	cin >> c;
	cout <<"������� ����� B: ";
	cin >> b;
	double ac , bc, abc;
	ac = abs(a - c);
	bc = abs(b - c);
	abc = ac * bc;
	cout << "AC * BC = "<<abc;
}
