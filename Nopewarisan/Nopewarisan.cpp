#include <iostream>
using namespace std;

class baseClass final {
public:
	virtual void perkenalan() {
		cout << "Hallo saya Function dari base class";
	}
};
class deriveClass : public baseClass {
public:
	void perkenalan() {
		cout << "Hallo saya function dari derived class";
	}
};
int main() {
	deriveClass a;
	a.perkenalan();

	return 0;
}