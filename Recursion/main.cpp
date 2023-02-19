#include <iostream>
using namespace std;



void elevator(int floor);
int factorial (int n);
double pow(double a, double n);
void fibonacci1(int n, int a=1, int b=1);
void fibonacci2(int n,int i=0, long long int a = 0, long long int b = 1);

//#define ELEVATOR
//#define FACTORIAL
//#define POW
#define FIBONACCI
void main()
{
	setlocale(LC_ALL, "");
	int n;
#ifdef ELEVATOR
	cout << "Hello Recursion" << endl;
	cout << "������� ����� �����: "; cin >> n;
	elevator(n);
#endif ELEVATOR
#ifdef FACTORIAL
	cout << "������� ��������� �����: "; cin >> n;
	cout << "��������� ����� " << n << " �����: " << factorial(n) << endl;
#endif FACTORIAL
#ifdef POW
	int a, b;
	cout << "�������  �����: "; cin >> a;
	cout << "�������  ������� �����: "; cin >> n;
	cout << "�����: " << a << " � �������" << b << " �����: " << pow(a,n) << endl;
#endif POW
#ifdef FIBONACCI
	cout << "������� ���������� �����: "; cin >> n;
	fibonacci1(n);
	cout << endl;
	fibonacci2(n);
#endif FIBONACCI
}

void elevator(int floor)
{
	if(floor==0)
	{
		cout << "�� � �������" << endl;
		return;
	}
	cout << "�� �� " << floor << " �����" << endl;
	elevator(floor-1);
	cout << "�� �� " << floor << " �����" << endl;

}

int factorial(int n)
{
	/*if (n == 0)return 1;
	else return n * factorial(n - 1);*/
	return n == 0 ? 1:n* factorial(n - 1);
}

double pow(double a,int n)
{
	
	return n == 0 ? 1 :n>0? a * pow(a, n - 1):1/a*pow(a,n+1);
}

void fibonacci1(int n, int a, int b)
{
	if (a>n)return;
	cout << a << "\t";
	fibonacci1(n, b, a + b);
}

void fibonacci2(int n,int i, long long int a, long long int b)
{
	if (i>n)return;
	cout << i << "\t" << a << "\n";
	fibonacci2(n,i+1, b, a + b);
}