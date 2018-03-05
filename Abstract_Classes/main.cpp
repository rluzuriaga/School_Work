#include <iostream>
#include <string>

using namespace std;

class shape {
public:
	shape() {};
	virtual ~shape() {cout << "shape destroyed" << endl;};
	void virtual print() = 0;
};

class circle : public shape {
public:
	circle() {};
	~circle() {cout << "circle destroyed" << endl;};
	void print() {
		cout << "circle" << endl;
	}
};

class rectangle : public shape {
public:
	rectangle() {};
	~rectangle() {cout << "rectangle destroyed" << endl;};
	void print() {
		cout << "rectangle" << endl;
	}
};


int main() {
	shape* arr[2];
	arr[0] = new circle;
	arr[1] = new rectangle;

	arr[0] -> print();
	arr[1] -> print();

	delete arr[0];
	delete arr[1];

	return 0;
}