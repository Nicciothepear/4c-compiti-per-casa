#include <iostream>
using namespace std;

int a;
int successivo (int a)
{
    int k;
    k=0;
    do{
        a++; k++;
        cout<<a;
    }
    while (k<=5);
}
int main ()
{
    cout<< "inserire numero:    ";
    cin>>a;
    successivo(a);
    return 0;
}
