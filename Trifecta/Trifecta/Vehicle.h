#include <string>
#include <iostream>
using namespace std;
class Car {
public:
	bool carType; // true is car false is truck
	int doors;
	string color;



	void setType(bool x) {
		carType = x;

}
	void setDoors(int x) {
		doors = x;

	}
	void setColor(string x) {
		color = x;

	}
	bool getType() {
		return carType;

	}
	int getDoors() {
		return doors;

	}
	string getColor() {
		return color;

	}
};
