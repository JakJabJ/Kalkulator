#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;

//ą\245ć\206ę\251ł\210ń\344ó\242ś\230ż\276ź\253Ą\244Ć\217Ę\250Ł\235Ń\343Ó\340Ś\227Ż\275Ź\215

  
int main()
 {
    int liczba, sw;
    float wynik=0;
 cout<< "podaj dzia\210anie: ";
 cin>>sw;
    switch(sw){
     case 1:{//+
      while(cin>>liczba){
       wynik+=liczba;
       }
      break;
     }
     case 2:{//-
      cin>>wynik;
      while(cin>>liczba){
       wynik-=liczba;
       }
      break;
     }
     case 3:{//*
      cin>>wynik;
      while(cin>>liczba){
       wynik*=liczba;
       }
      break;
     }
     case 4:{//%
      cin>>wynik;
      while(cin>>liczba){
       if(liczba==0){
        cout<<"nie mo\276na dzieli\206 przez 0";
        return 0;
        }
       wynik/=liczba;
       }
      break;
     }
      default: {
       cout<<"nie wybra\210e\230 dzia\210ania";
       return 0;
      }
    }
cout<<"wynik= "<< wynik;
return 0;
 }
