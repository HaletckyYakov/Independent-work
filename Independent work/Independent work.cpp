#include<iostream>
#include<conio.h>
using namespace std;
//#define CHARACTER_OUTPUT
//#define SHOOTER 
#define Escape 27
#define	UpArrow 72
#define DownArrow 80
#define LeftArrow 75
#define RightArrow 77
void main()
{
#ifdef CHARACTER_OUTPUT
	setlocale(LC_ALL, "rus");
	char key;
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;

	} while (true);
#endif CHARACTER_OUTPUT
#ifdef SHOOTER


	setlocale(LC_ALL, "rus");
	char key;
	do
	{
		key = _getch();
		switch (key)
		{
		case UpArrow:	cout << "������" << endl; break;
		case 'W':		cout << "������" << endl; break;
		case 'w':		cout << "������" << endl; break;
		case DownArrow: cout << "�����" << endl; break;
		case 'S':		cout << "�����" << endl; break;
		case 's':		cout << "�����" << endl; break;
		case LeftArrow:	cout << "�����" << endl; break;
		case 'A':		cout << "�����" << endl; break;
		case 'a':		cout << "�����" << endl; break;
		case RightArrow:cout << "������" << endl; break;
		case 'D':		cout << "������" << endl; break;
		case 'd':		cout << "������" << endl; break;
		case ' ':		cout << "������" << endl; break;
		case 13:		cout << "�����" << endl; break;
		default: if  (key != -32)		cout << "Error" << endl; //(key != -32) ������� ������ ������� ���� ���� 
		}
	} while (key != Escape);//while (key != 27);	//����� �� ���� ������� escape, ���� ������� define Escape, 
							//�� ����� �������� �������� ������� ������ ����
#endif // SHOOTER
	

}
