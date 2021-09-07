#include <iostream>
#include<locale.h>
using namespace std;

class Worker{
	public:
		// deklaracja zmiennuch cz³onkowskich
		string name;
		string surname;
		unsigned short int age;
	
		// definicja funkcji cz³onkowskiej
			void showName(){
				cout << "Twoje Imiê: " ;
			}
};


int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Polish");
	
	Worker pracownik;
	pracownik.surname = "nowak" ;
	pracownik.showName();
	pracownik.age = 16;
	cout<<"\nwiek: "<<pracownik.age<<"\n\n" ;
	
	return 0;
}
