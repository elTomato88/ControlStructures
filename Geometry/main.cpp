#include <iostream>
using namespace std;
//#define SQUARE //���������
//#define TASK_2 //���������
//#define TASK_3 //���������
//#define TASK_4 //���������
//#define TASK_5 //���������
//#define TASK_6 //����
//#define TASK_7 //����� � ������
//#define TASK_8 //��������� �����
//#define TASK_9 //��������� ����� �� ���������
#define TASK_10 // ����������� �������
void main()
{
	
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
#ifdef TASK_4 //------�����---
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

#ifdef TASK_5 //----�����-----
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
	setlocale(LC_ALL, "");
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
#ifdef TASK_7 //----����� � ������-----
	setlocale(LC_ALL, "");
	cout << "������� ������" << endl;
	cin >> hor;
	
	for (int i = 1; i <= hor; ++i) {
		if (i % 2)
		{
			for (int j = 1; j <= hor; ++j)
			{
				if (j % 2) cout << "+ ";
				else cout << "- ";
			}
			cout << endl;
		}
		else
		{
			for (int j = 1; j <= hor; ++j)
			{
				if (j % 2) cout << "- ";
				else cout << "+ ";
			}
			cout << endl;
		}
			
	}

#endif
#ifdef TASK_8 //----��������� �����-----
	
	cout << "Enter the size:" << endl;
	cin >> hor;

	/*------------������ �����--------------*/

	cout << char(218); //����� ������� ����
	for (int i = 1; i <= hor*2; ++i) // ������� �������
	{
		cout << char(196);
	}
	cout << char(191);//������ ������� ����
	cout << endl;

	/*------------����--------------*/

	for (int i = 1; i <= hor; ++i) {
		cout << char(179); // ����� �������
		if (i % 2)
		{
			for (int j = 1; j <= hor; ++j)  //�������� ������
			{
				if (j % 2) cout << char(219) << char(219);
				else cout << "  ";
			}
		}
		
		else
		{
			for (int j = 1; j <= hor; ++j) //������ ������ 
			{
				if (j % 2) cout << "  ";
				else 	cout << char(219) << char(219);

			}
		}
		
		cout << char(179); // ������ �������
		cout << endl;
	}

	/*------------������--------------*/

	cout << char(192); //����� ������ ����
	for (int i = 1; i <= hor * 2; ++i) // ������ �������
	{
		cout << char(196);
	}
	cout << char(217); //������ ������ ����

#endif
#ifdef TASK_9 //----��������� ����� �� ���������-----
	int limit;
	cout << "Please, enter the size: ";
	cin >> limit;
	int y = 2;
	for (int y = 0; y < limit;)
	{
		if (y % 2)
		{
			for (int j = 0; j < limit; j++)
			{
				for (int x = 0; x < limit; )
				{
					if (x < limit)
					{
						for (int i = 0; i < limit; i++)
						{
							cout << "  ";

						}
						x++;
					}


					if (x < limit)
					{
						for (int i = 0; i < limit; i++)
						{
							cout << "* ";

						}
						x++;
					}

				}

				cout << endl;
			}

		}
		else
		{
			for (int j = 0; j < limit; j++)
			{
				for (int x = 0; x < limit; )
				{
					if (x < limit)
					{
						for (int i = 0; i < limit; i++)
						{
							cout << "* ";

						}
						x++;
					}


					if (x < limit)
					{
						for (int i = 0; i < limit; i++)
						{
							cout << "  ";

						}
						x++;
					}

				}
				cout << endl;
			}
		}
		y++;
	}
	

#endif
#ifdef TASK_10
	int x; // ��� ������
	int y; //��� �������
	int n; //������ ������������, ����. ������, ����. �������
	int c; // ������� �������
	
	while (true)
	{
		
		cout << "Please, enter the N: "; cin >> n;
		if (cin.fail())
		{
			system("CLS");
			cin.clear();
#undef max
#undef min
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "incorrect" << endl;
		}
		else
		{
			system("CLS");
			for (y = 0; y < n;y++)
			{
				
				for (int x = 1;x < n - y;x++)
				{
					cout << " ";
				}
				for (x = 0;x <= y;x++)
				{
					int result_factorial_x = 1;
					int result_factorial_y = 1;
					int result_factorial_x_y = 1;

					for (int i = 1; i <= x; i++)
					{
						result_factorial_x = result_factorial_x * i;
					}
					for (int i = 1; i <= y; i++)
					{
						result_factorial_y = result_factorial_y * i;
					}
					for (int i = 1; i <= y - x; i++)
					{
						result_factorial_x_y = result_factorial_x_y * i;
					}

					c = result_factorial_y / (result_factorial_x * result_factorial_x_y);
					
					
					cout << c; cout <<" ";

				}
				cout << endl;

			}
			
				cout << endl;
			
		}
	}
#endif
}

