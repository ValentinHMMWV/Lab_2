#include <iostream>
#include <cmath>
using namespace std;
int main()
{ 
	// Boolean16. Дано ціле додатне число.
	//  Перевірити істинність висловлювання: «Дане число є парним двозначним».

	//декларація змінної
	cout << "\n Boolean16. \n";
	int x;
	
	// введення данних
	cout << "Enter x=";
	cin >> x;
	
	// підрахунок
	bool is_even = (x % 2 == 0);  // визначення ЛОГІЧНОЇ змінної
	
	// виведення результату
	cout << " " << boolalpha << is_even << endl;

	return 0;
	}
