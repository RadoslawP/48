#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float liczba;

int main()
{
    cout <<"Podaj liczbe: "<< endl;
    cin>>liczba;
    cout<<"Round: "<<round(liczba)<<endl;
    cout<<"Ceil: "<<ceil(liczba)<<endl;
    cout<<"Floor: "<<floor(liczba)<<endl;
    cout<<"Trunc: "<<trunc(liczba)<<endl;

    cout<<setprecision(20);
    cout<<"Pi= "<<M_PI<<endl;
    cout<<"stala Eulera = "<<M_E<<endl;

    return 0;
}
