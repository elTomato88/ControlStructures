#include <iostream>
using namespace std;
//#define FACTORIAL

void main()
{
	setlocale(LC_ALL, "");
	/*for (;;)//while(true)
	cout << "Hello FOR";
	*/
#ifdef FACTORIAL
	int n; //���������� ��������
	cout << "Please, enter n interation: "; cin >> n;
	double f = 1;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! =";
		f *= i; // arithmetical overflow() �������� ��� ������� ������� ��� ���������� �� ����������� � ���������� ��� ��������. 
		cout << f << endl;
	}
	cout << endl;
	//inf - infinity 
#endif // FACTORIAL

	

}