#include <iostream>
#include <math.h>

using namespace std;
int main()
 {
    int liczba, sw;
    float wynik=0;
 cout<<"podaj działanie: ";
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
        cout<<"nie można dzielić przez 0";
        return 0;
        }
       wynik/=liczba;
       }
      break;
     }
      deflaut: {
       cout<<"nie wybrałeś działania";
       break;
      }
    }
cout<<"wynik= "<< wynik;
return 0;
 }
