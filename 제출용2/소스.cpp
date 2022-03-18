#include <iostream>
#include <string>
#include <limits>
using namespace std;


class Point {
public:
	Point(std::string pname, int px, int py) {
		name = pname, x = px, y = py;
	}
	std::string getName() { return name; }
	int getX() { return x; }
	int getY() { return y; }
	void setName(std::string pname) { name = pname; }
	void setX(int px) { x = px; }
	void setY(int py) { y = py; }
private:
	std::string name;
	int x;
	int y;
};

int main() {
	Point p1{"name",0,0};
	Point p2{"name",0,0};

	cout << "Name of p1: ";
	string name;
	getline(cin, name);
	p1.setName(name);

	cout << "Position of p1: ";
	int x, y;
	cin >> x >> y;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	p1.setX(x);
	p1.setY(y);

	cout << p1.getName() << " (" << p1.getX() << ", " << p1.getY() << ")";

	cout << "\n" << "Name of p2: ";
	getline(cin, name);
	p2.setName(name);

	cout << "Position of p2: ";
	cin >> x >> y;
	p2.setX(x);
	p2.setY(y);

	cout << p2.getName() << " (" << p2.getX() << ", " << p2.getY() << ")";


}