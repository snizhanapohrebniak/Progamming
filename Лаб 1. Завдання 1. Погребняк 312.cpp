#include <iostream> 
using namespace std;
int main()
{
	// ������ Begin14 
	// ���������� ������ 
	double a, b, c, ac, cb, P;
	// �������� ����� a 
	cout << "Enter a:";
	cin >> a;
	// �������� ����� b 
	cout << "Enter b:";
	cin >> b;
	// �������� ����� c 
	cout << "Enter c:";
	cin >> c;
	// ���������� ������� AC 
	ac = c - a;
	// ���������� ������� CB 
	cb = b - c;
	// ���������� ������� P 
	P = ac * cb;
	// ���� ���������� 
	cout << "Dobutok:" << P << endl;
	return 0;
}