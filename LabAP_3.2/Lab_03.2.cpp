// Lab_03_2.cpp
// < �������� ��������� ����������� >
// ����������� ������ � 3.2
// ������������, ������ ��������: ������� � �����������.
// ������ 11

#include <iostream>

using namespace std;

int main()
{
	double x; // ������� ��������
	double a; // ������� ��������
	double b; // ������� ��������
	double c; // ������� ��������
	double F; // ��������� ���������� ������

	cout << "Enter a: "; cin >> a;
	cout << "Enter b: "; cin >> b;
	cout << "Enter c: "; cin >> c;
	cout << "Enter x: "; cin >> x;

	// ����� �1: ������������ � ��������� ����
	if (x < 1 && c != 0)
		F = (a * pow(x, 2) + (b / c));
	if (x > 1.5 && c == 0)
		F = (x - a) / pow(x - c, 2);
	if (!(x < 1 && c != 0) && !(x > 1.5 && c == 0))
		F = pow(x, 2) / pow(c, 2);

	cout << endl;
	cout << "First F = " << F << endl;

	// ����� �2: ������������ � ����� ����
	if (x < 1 && c != 0)
		F = (a * pow(x, 2) + (b / c));
	if (x > 1.5 && c == 0)
		F = (x - a) / pow(x - c, 2);
	else
		F = pow(x, 2) / pow(c, 2);

	cout << endl;
	cout << "Second F = " << F << endl;

	cin.get();
	return 0;
}