#include <iostream>
#include <cmath>
using namespace std;
int main()
{

	// y = ... (tab.3 N26)
	cout << "\n Math.26. \n";					
	const double pi = 3.141592;			 // визначення дійсної константи
	double x, num, denom;				// декларація дійсних змінних

	// введення данних
	cout << "Real argument x = ";
	cin >> x;

	// підрахунок
	num = 4 * pow(tan(x), 2) * sin(x) + (1.0 / 5) * sqrt(fabs(1 - pow(sin(x), 2) * tan(x)));		// чисельник
	denom = cbrt(4 + pow(x, 3) / 5 + log2(fabs(x)));										// знаменник
	double y = num / denom;

	// виведення результату
	cout << "Function y = " << y << endl;
	return 0;
