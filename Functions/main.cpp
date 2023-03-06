#include <iostream>
using namespace std;

int Add(int a, int b)
{
	int sum = a + b;
	return sum;
}

int Sub(int a, int b)// Substraction - умножение 
{
	return a - b;
}

int Mul(int a, int b)// Multiplication - умножение
{
	return a * b;
}

int Div(int a, int b)//Division - деление
{
	return a / b;
}

int Pow(int a, int b)
{
	int result = 1;
	for (int i = 0; i < b; i++)
	{
		result *= a;
	}
	return result;
}
void main()
{
	setlocale(LC_ALL, "");
	int a; int b;
	cout << "Введите 2 числа: "; 
	cin >> a;
	cin >> b;

	int c = Add(a, b); //использование функции -Function call

	cout << a << "+" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << Sub(a,b) << endl;
	cout << a << "*" << b << "=" << Mul(a, b) << endl;
	cout << a << "/" << b << "=" << Div(a, b) << endl;
	cout << a << "^" << b << "=" << Pow(a, b) << endl;

}