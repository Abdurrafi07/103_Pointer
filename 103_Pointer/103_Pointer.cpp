#include <iostream>
using namespace std;

class mahasiswa {
	public:
	int nim;
	void showNim() {
		cout << "No Induk = " << nim << endl;
	}
};

int main (){
	mahasiswa mhs{1};	// Object mhs
	mhs.showNim();	// Member Acces Oprator

	mahasiswa &refMhs = mhs;	// Pointer Reference refMhs
	refMhs.nim = 2;	// Member Access Oprator
	mhs.showNim();

	mahasiswa *pMhs = &mhs;	// Pointer Deference pMhs
	pMhs->nim = 3;	// Arrow Oprator
	mhs.showNim();
	return 0;
}