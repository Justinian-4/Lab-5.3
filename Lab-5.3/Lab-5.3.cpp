#include <iostream>
#include <cmath>
using namespace std;
double s (const double x);
int main()
{
	double tp, tk, z ;
	int n;
	cout << "tp = "; cin >> tp;
	cout << "tk = "; cin >> tk;
	cout << "n = "; cin >> n;
	double dt = (tk - tp) / n;
	double t = tp;
	while (t <= tk)
	{
		z = s*(t*t+1)+(2*s*s)*(1-t)+s(1);
		cout << t << " " << z << endl;
		t += dt;
	}
	return 0;
}
double s(const double x)
{
	if (abs(x) > 1)
		return (cos(x)*cos(x)+1)/ (pow(exp,x));
	else
	{
		double S = 0;
		int k = 0;
		double a = 1;
		S = a;
		do
		{
			for (k = 0; k <= 4; k++)
			k++;
			double R = (pow(x,2*k+1)) /(2*k+1) ;
			a *= R;
			S += a;
		} while (k < 4);
		return S;
	}
}