#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "Palindrome" << endl;
	int number; // �����, �������� � ���������� 123
	int reverse = 0; //�����, ���������� � �������� �������. 321
	cout << "Please, enter the number: "; cin >> number;
	int buffer=number; // ����� �����, ���������� � ����������.
	
	while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10;//�������� ������� ������. 
		buffer /= 10; //������� ������� ������
		
		
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