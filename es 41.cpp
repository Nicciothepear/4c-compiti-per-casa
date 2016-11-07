#include <iostream>
#include <string.h>
using namespace std;
float incasso, somma, media;
string nome;
int acquisizione(float incasso, float somma, float media, string nome)
{
 int i, o;
 i=1;
   do
   {
   cout<<" inserire reparto:  ";
   cin>>nome;
   cout<<" inserire incasso:   ";
   cin>>incasso;
   somma=somma+incasso;
   media=somma/i;
   cout<<"altro?(0=SI):  ";
   cin>>o;
   i++;
   } while(o==0);
   return media;
}


int main()
{
 cout<<" la media e : "<<acquisizione(incasso, somma, media, nome);
 return 0;
}
