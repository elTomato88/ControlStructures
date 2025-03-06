#include <iostream>
using namespace std;
//#define SQUARE //проверено
//#define TASK_2 //проверено
//#define TASK_3 //проверено
//#define TASK_4 //проверено
//#define TASK_5 //проверено
//#define TASK_6 //ромб
//#define TASK_7 //плюсы и минусы
//#define TASK_8 //шахматна€ доска
//#define TASK_9 //шахматна€ доска из звездочек
#define TASK_10 // “реугольник ѕјскал€
void main()
{
	
	int hor = 0;
	int ver = 0;
#ifdef SQUARE //-----квадратик---------------
	cout << "¬ведите горизонталь"<<endl;
	cin >> hor;
	cout << "¬ведите вертикаль" << endl;
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
#ifdef TASK_2 //----------лесенка----------	
	cout << "¬ведите вертикаль" << endl;
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
#ifdef TASK_3 //---------обратна€ лесенка----------	
	cout << "¬ведите гориз" << endl;
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
#ifdef TASK_4 //------треуг---
	cout << "¬ведите гориз" << endl;
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

#ifdef TASK_5 //----треуг-----
	cout << "¬ведите гориз" << endl;
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

#ifdef TASK_6 //----–ќћЅ-----
	setlocale(LC_ALL, "");
	cout << "¬ведите гориз" << endl;
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
		cout << "\\" << endl;  //не забывай делать экранироввание
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
#ifdef TASK_7 //----плюсы и минусы-----
	setlocale(LC_ALL, "");
	cout << "¬ведите размер" << endl;
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
#ifdef TASK_8 //----шахматна€ доска-----
	
	cout << "Enter the size:" << endl;
	cin >> hor;

	/*------------рисуем шапку--------------*/

	cout << char(218); //левый верхний угол
	for (int i = 1; i <= hor*2; ++i) // верхн€€ граница
	{
		cout << char(196);
	}
	cout << char(191);//правый верхний угол
	cout << endl;

	/*------------тело--------------*/

	for (int i = 1; i <= hor; ++i) {
		cout << char(179); // лева€ граница
		if (i % 2)
		{
			for (int j = 1; j <= hor; ++j)  //нечетные строки
			{
				if (j % 2) cout << char(219) << char(219);
				else cout << "  ";
			}
		}
		
		else
		{
			for (int j = 1; j <= hor; ++j) //четные строки 
			{
				if (j % 2) cout << "  ";
				else 	cout << char(219) << char(219);

			}
		}
		
		cout << char(179); // права€ граница
		cout << endl;
	}

	/*------------подвал--------------*/

	cout << char(192); //левый нижний угол
	for (int i = 1; i <= hor * 2; ++i) // нижн€€ граница
	{
		cout << char(196);
	}
	cout << char(217); //правый нижний угол

#endif
#ifdef TASK_9 //----шахматна€ доска из звездочек-----
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
	int x; // ось абцисс
	int y; //ось ординат
	int n; //размер треугольника, макс. строка, макс. столбец
	int c; // текущий элемент
	
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

