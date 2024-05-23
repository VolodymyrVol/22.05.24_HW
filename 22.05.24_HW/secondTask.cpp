#include <iostream>
using namespace std;
class Car
{
	char* model;
	char* country;
	char* color;
	int year;
	double price;
public:
	Car() // default
	{
		model = country = color = nullptr;
		year = price = 0;
	}
	Car(const char* Model, const char* Country, const char* Color, int Year, double Price) // 2 params
	{
		model = new char[strlen(Model) + 1];
		strcpy_s(model, strlen(Model) + 1, Model);
		
		country = new char[strlen(Country) + 1];
		strcpy_s(country, strlen(Country) + 1, Country);

		color = new char[strlen(Color) + 1];
		strcpy_s(color, strlen(Color) + 1, Color);

		year = Year;

		price = Price;
	}
	~Car() // destruct
	{
		delete[] model;
		delete[] country;
		delete[] color;
	}
	Init()
	{

	}
	Show()
	{

	}
};




int main()
{

}