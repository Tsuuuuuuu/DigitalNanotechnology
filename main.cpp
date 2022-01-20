#include <iostream>
using namespace std;

class Magnet{
	public:
	string pole;
	string Pole1 = "North";
	string Pole2 = "South";
};

Magnet magnet1;
Magnet magnet2;

void Attraction(){
		int i;
	cout << "Magnet 1: (1) North (2) South\n";
	cin >> i;
	if (i == 1){
		magnet1.pole = magnet1.Pole1;
	}
	if (i == 2){
		magnet1.pole = magnet1.Pole2;
		
	}

	cout << "Magnet 2: (1) North (2) South\n";
	cin >> i;
	if (i == 1){
		magnet2.pole = magnet2.Pole1;
	}
	if (i == 2){
		magnet2.pole = magnet2.Pole2;
	}
	if(magnet1.pole == magnet1.Pole1 && magnet2.pole == magnet2.Pole1){
		cout << "Your magnet directions are: Magnet 1: " << magnet1.Pole1 << endl << "Magnet 2: " << magnet2.Pole1;
		cout << "\nThe Poles are repelled";
	}
	if(magnet1.pole == magnet1.Pole2 && magnet2.pole == magnet2.Pole2){
		
	cout << "Magnet 1: " << magnet1.pole << endl << "Magnet 2: " << magnet2.pole << endl << endl;
	cout << "\nThe magnets are Repelled";
	}
	if(magnet1.pole == magnet1.Pole1 && magnet2.pole == magnet2.Pole2){
		cout << "Magnet 1: " << magnet1.pole << endl << "Magnet 2: " << magnet2.pole << endl << endl;
		cout << "\nThe magnets are Attracted";
	}
	if(magnet1.pole == magnet1.Pole2 && magnet2.pole == magnet2.Pole1){
		cout << "Magnet 1: " << magnet1.pole << endl << "Magnet 2: " << magnet2.pole << endl << endl;
		cout << "\nThe magnets are Attracted";
	}
}
int main(){
Attraction();
}
