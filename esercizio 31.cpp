#include <iostream>
#include <string.h>
using namespace std;
string testo;
void stampa (string testo)
{
    cout<< testo <<endl;
    cout<< testo <<endl;
    cout<< testo <<endl;
}

int main()
{

    cout<< "inserire testo:    ";
    cin>>testo;
    cout<<endl;
    stampa (testo);
    return 0;
}
