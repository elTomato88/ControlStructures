#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "Palindrome" << endl;
	int number; // число, вводимое с клавиатуры 123
	int reverse = 0; //число, записанное в обратном порядке. 321
	cout << "Please, enter the number: "; cin >> number;
	int buffer=number; // копия числа, введенного с клавиатуры.
	
	while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10;//получаем младший разряд. 
		buffer /= 10; //Убираем младший разряд
		
		
	}
	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "Palindrom!" << endl;
	}
	else
	{
		cout << "Not palindrom" << endl;
	}
}