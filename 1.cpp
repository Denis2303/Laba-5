#include<iostream>
using namespace std;
#include <cmath>
int main(){
	setlocale(LC_ALL,"rus");
	double x1, x2, y1, y2;
	cout << "Введите координаты точки 1: ";
	cin >> x1>> y1;
	cout << "Введите координаты точки 2:";
	cin >>x2 >>y2;
	double a;
	a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	cout<<"Расстояние между точками = "<<a;
}
