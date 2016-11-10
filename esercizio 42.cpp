#include <iostream>
#include <string.h>
using namespace std;

string descrizione;
float prezzo, incremento;
int n;

float prezzo_incrementato();

int main()
{
  cout<<" inserire l'incremento:    ";
  cin>> incremento;
  cout<<" inserire numero prodotti:     ";
  cin>>n;
  while(n>0)
    {
      n--;
      cout<<" inserire descrizione prodotto:      ";
      cin>>descrizione;
      cout<<" inserire prezzo prodotto:         ";
      cin>>prezzo;
      cout<<" descrizione:  "<<descrizione <<endl;
      cout<<"prezzo:   "<<prezzo <<endl;
      cout<<"prezzo incrementato:     "<<prezzo_incrementato() <<endl;


    }

  return 0;


}


float prezzo_incrementato()
 {
   float prezzoincrementato;
   prezzoincrementato= prezzo+((prezzo*incremento)/100);

   return prezzoincrementato;
 }
