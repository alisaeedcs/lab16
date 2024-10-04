#include <iostream>
#include <iomanip>
using namespace std;

class Color {
private:
	int red, green, blue;
public:
	Color() { red = 0; green = 0; blue = 0; } //default constructor
	Color(int r, int g) { red = r; green = g; blue = 0; } //partial constructor
	Color(int r, int g, int b) { red = r; green = g; blue = b; } //full parameter constructor
	
	int getRed() {return red; }
	int getGreen() {return green; }
	int getBlue() {return blue; }
	//print method
	void print() {
		cout << setw(15) << "Red: " << red << endl;
		cout << setw(15) << "Green: " << green << endl;
		cout << setw(15) << "Blue: " << blue << endl;
	}
};

int main() {
	//teal color
	Color teal = Color(0, 128, 128);

	//orange color
	Color orange = Color(255, 165);

	//turquoise color
	Color turquoise = Color(48, 213, 200);


	//output
	cout << "Teal" << endl;
	teal.print();

	cout << "Orange" << endl;
	orange.print();

	cout << "Turquoise" << endl;
	turquoise.print();
	return 0;
}