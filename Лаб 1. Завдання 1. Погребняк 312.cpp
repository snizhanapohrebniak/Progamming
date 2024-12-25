#include <iostream> 
using namespace std;
int main()
{
	// задача Begin14 
	// декларація змінних 
	double a, b, c, ac, cb, P;
	// введення змінної a 
	cout << "Enter a:";
	cin >> a;
	// введення змінної b 
	cout << "Enter b:";
	cin >> b;
	// введення змінної c 
	cout << "Enter c:";
	cin >> c;
	// розрахунок довжина AC 
	ac = c - a;
	// розрахунок довжина CB 
	cb = b - c;
	// розрахунок добуток P 
	P = ac * cb;
	// вивід результату 
	cout << "Dobutok:" << P << endl;
	return 0;
}