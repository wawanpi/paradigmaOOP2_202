#include <iostream>
#include <string>
using namespace std;

class orang {
public:
	string nama;

	orang(string pNama) :
		nama(pNama) {
		cout << "orang dibuat\n" << endl;
	}
	~orang(){
		cout << "orang dihapus\n" << endl;
		}
};

class manusia {
public:
	string jeniskelamin; 

	manusia(string pJenisKelamin) :
		jeniskelamin(pJenisKelamin) {
		cout << "Manusia dibuat\n" << endl;
	}
	~manusia() {
		cout << "Manusia dihapus\n"
	}
};