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
		case UpArrow:	cout << "Вперед" << endl; break;
		case 'W':		cout << "Вперед" << endl; break;
		case 'w':		cout << "Вперед" << endl; break;
		case DownArrow: cout << "Назад" << endl; break;
		case 'S':		cout << "Назад" << endl; break;
		case 's':		cout << "Назад" << endl; break;
		case LeftArrow:	cout << "Влево" << endl; break;
		case 'A':		cout << "Влево" << endl; break;
		case 'a':		cout << "Влево" << endl; break;
		case RightArrow:cout << "Вправо" << endl; break;
		case 'D':		cout << "Вправо" << endl; break;
		case 'd':		cout << "Вправо" << endl; break;
		case ' ':		cout << "Прыжок" << endl; break;
		case 13:		cout << "Огонь" << endl; break;
		default: if  (key != -32)		cout << "Error" << endl; //(key != -32) убирает ошибку второго аски кода 
		}
	} while (key != Escape);//while (key != 27);	//выход по коду клавиши escape, если создать define Escape, 
							//то можно написать название клавиши вместо кода
#endif // SHOOTER 
	// создаю коммит

}
