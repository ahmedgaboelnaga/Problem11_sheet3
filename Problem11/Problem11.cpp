#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << "Celcius" << setw(15) << "Fahrenheit" << endl;

	for (int celcius = 0; celcius <= 200; celcius += 10)
	{
		double fahrenheit = (celcius * 9 / 5) + 32;
		cout << setw(3) << celcius << setw(13) << fahrenheit << endl;
	}


	return 0;
}