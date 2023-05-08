#include <iostream>
#include <string>
using namespace std;

class siswa;

class orang {
private:
	string nama;
public:
	void swtNama(string pNama);
	friend class siswa;
};