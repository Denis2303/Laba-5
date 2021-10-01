#include <iostream>
#include <cmath>
using namespace std;
double r(double a, double b, double c, double d){
	return sqrt(pow( a - c, 2 ) + pow ( d - b, 2 ));
}
int main(){
	double x1, x2, x3, y1, y2, y3;
	setlocale(LC_ALL,"rus");
	cout << "¬ведите координаты первой точки: ";
	cin >> x1 >> y1;
	cout << "¬ведите координаты второй точки: ";
	cin >> x2 >> y2;
	cout << "¬ведите координаты третьей точки: ";
	cin >> x3 >> y3;
	double a, b, c;
	a = r(x1, y1 , x2, y2);
	b = r(x2, y2 , x3, y3);
	c = r(x1, y1, x3, y3);
	double p = ( a + b + c) / 2;
	double k, s;
	k = a + b + c;
	s = sqrt(p *(p - a) * ( p - b) *( p - c));
	cout <<"ѕериметр треугольника равен: " << k << endl;
	cout <<"ѕлощадь треугольника равна: " << s;
}
