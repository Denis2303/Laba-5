#include <iostream>
#include <cmath>
using namespace std;
int main(){
	setlocale(LC_ALL,"rus");
	double x1, x2, y1, y2;
	cout <<"¬ведите первую точку: ";
	cin >> x1 >> y1;
	cout <<"¬ведите вторую точку: ";
	cin >> x2 >> y2;
	double a = abs(x1 - x2);
	double b = abs(y1 - y2);
	double s, p;
	p = a + b;
	p *= 2;
	s = a * b;
	cout <<"ѕлощадь равна: " << s <<endl;
	cout <<"ѕериметр равен: "<< p;
	
}
