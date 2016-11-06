#include <iostream>
using namespace std;
float prezzo_vendita, precentuale_sconto, prezzo_scontato;
int sconto (float prezzo_vendita, float percentuale_sconto, float prezzo_scontato)
{
    prezzo_scontato=prezzo-((prezzo_vendita*percentuale_sconto)/100);
    return prezzo_scontato;
}
int main()
{
    cout<<" inserire prezzo del prodotto:    ";
    cin>>prezzo_vendita;
    cout<<" inserire lo sconto:       ";
    cin>>percentuale_sconto;
    cout<<" prezzo scontato:            ";
    cout<<sconto (prezzo_vendita,percentuale_sconto,prezzo_scontato) <<endl;
    return 0;
}
