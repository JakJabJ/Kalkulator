#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;

//ą\245ć\206ę\251ł\210ń\344ó\242ś\230ż\276ź\253Ą\244Ć\217Ę\250Ł\235Ń\343Ó\340Ś\227Ż\275Ź\215

  
int main()
 {
	cout<< " liczba -> dzia\210anie -> " << endl << " + dodawanie \n - odejmowanie \n * mno\276enie \n / dzielenie \n\n by zako\344czy\206 wpisz =" << endl;
    int liczba, sw;
	string dzialanie;
	cin>> liczba;
	float wynik=liczba;
	while (true){
		cin>> dzialanie;
		if (dzialanie=="=") {
			break;
		}
		cin>> liczba;
		if (dzialanie=="+"){
			sw=1;
		}
		if (dzialanie=="-"){
			sw=2;
		}
		if (dzialanie=="*") {
			sw=3;
		}
		if (dzialanie=="/") {
			sw=4;
		}
		switch(sw){
			case 1:{//+
				wynik+=liczba;
				break;
			}
			case 2:{//-
				wynik-=liczba;
				break;
			}
			case 3:{//*
				wynik*=liczba;
				break;
			}
			case 4:{//%
				if(liczba==0){
				cout<<"nie mo\276na dzieli\206 przez 0";
				cout << "wynik= " << wynik;
				return 0;
				}
				wynik/=liczba;
				break;
			}
		}
	}
	cout<<"wynik= "<< wynik;
	return 0;
}
