#include <iostream>
using namespace std;

class Box {
private:
	double length;
	double width;
	double height;
public:
	double Volume() {
		return length * width * height;
	}
};
int main(void) {
	Box Box1(1.0, 2.0, 3.0);
	Box Box2(1.0, 2.0, 5.0);
	cout << "ÀüÃ¼ °´Ã¼ ¼ö: " << << endl;
	return 0;
}