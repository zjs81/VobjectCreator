#include <iostream>
#include <string>
#include "Vehicle.h"
using namespace std;

int doors;
string color;
string type;



string carortruck(bool i) {
	if (i == true) {
		return "car";
	}
	else {
		return "truck";
	}

}



void createinitobj(bool ctype, string _color, int _doors ) {
	
	Car car;
	car.setType(ctype);
	car.setColor(_color);
	car.setDoors(_doors);
	color = car.getColor();
	type = carortruck(ctype);
	doors = car.getDoors();
}

void GetDetails() {

	cout << "The ";
	cout << type;
	cout << " has ";
	cout << doors;
	cout << " doors ";
	cout << " and the color is ";
	cout << color;
	
}