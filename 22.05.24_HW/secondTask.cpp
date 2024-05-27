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
	Car(const char* Model, const char* Country, const char* Color, int Year, double Price) 
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
	Car(Car& obj)
	{
		model = new char[strlen(obj.model) + 1];
		strcpy_s(model, strlen(obj.model) + 1, obj.model);

		country = new char[strlen(obj.country) + 1];
		strcpy_s(country, strlen(obj.country) + 1, obj.country);

		color = new char[strlen(obj.color) + 1];
		strcpy_s(color, strlen(obj.color) + 1, obj.color);

		year = obj.year;
		price = obj.price;
	}
	~Car() // destruct
	{
		delete[] model;
		delete[] country;
		delete[] color;
	}
	void Input(const char* Model, const char* Country, const char* Color, int Year, double Price)
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
	void Init()
	{
		model = country = color = nullptr;
		year = price = 0;
	}
	void Show()
	{
		cout << "Model: " << model 
			<< "\nCountry: " << country
			<< "\nColor: " << color
			<< "\nYear: " << year 
			<< "\nPrice: " << price << endl << endl;
	}
};




int main()
{
	Car a{"Nissan", "Japan", "Gray", 2007, 30000};
	a.Show();

	Car b = a;
	b.Show();
}