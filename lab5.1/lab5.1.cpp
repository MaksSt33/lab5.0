// Lab 5_1

#include <iostream>
#include <cmath>

using namespace std;

double h(const double x, const double y);
int main()
{
	double s, t;
	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;
	double c = h(s, t * t) + h(t, 1 + s * s) * h(t, 1 + s * s);
	cout << "c = " << c << endl;
	return 0;
}
double h(const double x, const double y)
{
	return (x * x + sin(x * y) + y * y) / (1 + x * x + y * y);
}