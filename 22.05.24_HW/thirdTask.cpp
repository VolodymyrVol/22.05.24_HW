#include <iostream>
using namespace std;

class Date
{
public:
	int day;
	int month;
	int year;
	Date()
	{
		day = 0;
		month = 0;
		year = 0;
	}
	void Init(int a, int b, int c)
	{
		day = a;
		month = b;
		year = c;
	}
};

class Human
{
	Date obj1;
	char* name;
	char* surname;
	char* patr;
	char* id;
public:
	Human()
	{
		name = nullptr;
		surname = nullptr;
		patr = nullptr;
		id = nullptr;
	}
	Human(int Day, int Month, int Year, const char* Name, const char* Surname, const char* Patr, const char* ID)
	{
		obj1.Init(Day, Month, Year);

		name = new char[strlen(Name) + 1];
		strcpy_s(name, strlen(Name) + 1, Name);

		surname = new char[strlen(Surname) + 1];
		strcpy_s(surname, strlen(Surname) + 1, Surname);

		patr = new char[strlen(Patr) + 1];
		strcpy_s(patr, strlen(Patr) + 1, Patr);

		id = new char[strlen(ID) + 1];
		strcpy_s(id, strlen(ID) + 1, ID);
	}
	Human(Human& a)
	{
		obj1.Init(a.obj1.day, a.obj1.month, a.obj1.year);

		name = new char[strlen(a.name) + 1];
		strcpy_s(name, strlen(a.name) + 1, a.name);

		surname = new char[strlen(a.surname) + 1];
		strcpy_s(surname, strlen(a.surname) + 1, a.surname);

		patr = new char[strlen(a.patr) + 1];
		strcpy_s(patr, strlen(a.patr) + 1, a.patr);

		id = new char[strlen(a.id) + 1];
		strcpy_s(id, strlen(a.id) + 1, a.id);
	}
	~Human()
	{
		delete[] name;
		delete[] surname;
		delete[] patr;
		delete[] id;
	}
	void Show()
	{
		cout <<	"Name: " << name << endl <<
			"Surname: " << surname << endl <<
			"Patronymic: " << patr << endl <<
			"ID: " << id << endl <<"Date of birth: "<< obj1.day<<"." << obj1.month << "." << obj1.year << endl << endl;

	}
};

int main()
{
	Human a{ 03,11,2007,"Arsen","Bulgaru","N", "12AS123ASCX42" };
	a.Show();

	Human b = a;
	b.Show();
}