#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Introduceti trimestrul n=";
    cin>>n;

    switch(n)
    {
        case 1 : cout<<"Profitul firmei pe trimestrul I este 3000, iar bilantul pe anul anterior este 8375"<<endl;break;
        case 2 : cout<<"Profitul firmei pe trimestrul al II-lea este 5000 "<<endl;break;
        case 3 : cout<<"Profitul firmei pe trimestrul al III-lea este 4000 "<<endl;break;
        case 4 : cout<<"Profitul firmei pe trimestrul al IV-lea este 2500"<<endl;break;
        default : cout<<"Ati introdus trimestrul gresit!"<<endl;
    }

}
