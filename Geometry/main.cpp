#include <iostream>
using namespace std;
//#define SQUARE
//#define TASK_2
//#define TASK_3
//#define TASK_4
//#define TASK_5
#define TASK_6
void main()
{
	setlocale(LC_ALL, "");
	int hor = 0;
	int ver = 0;
#ifdef SQUARE //-----���������---------------
	cout << "������� �����������"<<endl;
	cin >> hor;
	cout << "������� ���������" << endl;
	cin >> ver;
	
	for (int j = 1; j <= ver; j++) 
	{
		for (int i = 1; i <= hor; i++)
		{
			cout << "* ";
			
		}
		cout << endl;
	}

#endif
#ifdef TASK_2 //----------�������----------	
	cout << "������� ���������" << endl;
	cin >> ver;

	for (int j = 1; j <= ver; j++)
	{
		for (int i = 1; i <= j; i++)
		{
			cout << "* ";

		}
		cout << endl;
	}
#endif
#ifdef TASK_3 //---------�������� �������----------	
	cout << "������� �����" << endl;
	cin >> ver;

	for (int j = ver; j >= 0; j--)
	{
		for (int i = 1; i <= j; i++)
		{
			cout << "* ";

		}
		cout << endl;
	}

#endif
#ifdef TASK_4 //---------
	cout << "������� �����" << endl;
	cin >> hor;

	

	// ith row has n-i+1 elements
	for (int i = 1; i <= hor; i++) {
		// leading spaces
		for (int j = 1; j < i; j++)
			cout << "  ";
		for (int j = 1; j <= hor - i + 1; j++)
			cout << "* ";
		cout << endl;
	}
#endif

#ifdef TASK_5 //---------
	cout << "������� �����" << endl;
	cin >> hor;



	// ith row has n-i+1 elements
	for (int i = 1; i <= hor; i++) {
		// leading spaces
		for (int j = 0; j <hor-i; j++)
			cout << "  ";
		for (int j = 0; j < i; j++)
			cout << "* ";
		cout << endl;
	}
#endif

#ifdef TASK_6 //----����-----
	cout << "������� �����" << endl;
	cin >> hor;
	int i;
	for (i = 0; i < hor; ++i) {
		for (int j = 0; j < hor - i; ++j)
		{
			cout << " ";
		}
		cout << "/";
		for (int j = 0; j < i*2; ++j) 
		{
			cout << " ";
		}
		cout << "\\" << endl;  //�� ������� ������ ��������������
	}
	for (--i; i >= 0; --i) {
		for (int j = 0; j < hor - i; ++j)
		{
			cout << " ";
		}
		cout << "\\";
		for (int j = 0; j < i * 2; ++j)
		{
			cout << " ";
		}
		cout << "/" << endl;
	}
	
#endif

}

