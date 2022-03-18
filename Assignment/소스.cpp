#include <iostream>
#include <string>
#include "Çì´õ.h"

using namespace std;










































int main() {
	Point p1{"name",0,0};
	Point p2{"name",0,0};

	cout << "Name of p1: ";
	string name1;

	getline(cin, name1);
	p1.setName(name1);

	cout << "Position of p1: ";
	int p1x;
	int p1y;

	cin >> p1x >> p1y;
	p1.setX(p1x);
	p1.setY(p1y);

	cout << p1.getName() << " (" << p1.getX() << ", " << p1.getY() << ")";



	cout << "\n\n" << "Name of p2 : ";
	string name2;
	cin.ignore();
	getline(cin, name2);
	p2.setName(name2);

	cout << "Position of p2: ";
	int p2x;
	int p2y;

	cin >> p2x >> p2y;
	p2.setX(p2x);
	p2.setY(p2y);

	cout << p2.getName() << " (" << p2.getX() << "," << p2.getY() << ")";
}

