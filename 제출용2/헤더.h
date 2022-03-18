#include <string>

class Point {
public:
	Point(std::string pname, int px, int py) { name = pname, x = px, y = py;
	}
	std::string getName() const { return name; }
	int getX() const { return x;}
	int getY() const { return y;}
	void setName(std::string pname) { name = pname;}
	void setX(int px) { x = px;}
	void setY(int py) { y = py;}
private:
	std::string name;
	int x;
	int y;
};