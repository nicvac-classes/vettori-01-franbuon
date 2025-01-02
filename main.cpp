#include <iostream>
using namespace std;

int main() {
    string v[5], w[5];
    int x[11], y[6], i;
    v[0]="Fibra";
    v[1]="Vasco";
    v[2]="Kanye";
    v[3]="Fiorella";
    v[4]="Ghali";
    cout<<v[0]<<endl;
    cout<<v[2]<<endl;
    cout<<v[4]<<endl;
    i=0;
    while(i<5)
    {
        cout<<"Inserisci il nome del "<<i+1<<" cantante"<<endl;
        cin>>w[i];
        i=i+1;
    }
    i=1;
    while(i<=10)
    {
        x[i]=i;
        cout<<x[i]<<endl;
        if(x[i]%2==0)
        {
            cout<<"Numero pari: "<<x[i]<<endl;
        }
        else
        {
            cout<<"Numero dispari: "<<x[i]<<endl;
        }
        i=i+1;
    }
    i=1;
    while(i<=5)
    {
        y[i]=i*2;
        cout<<y[i]<<endl;
        i=i+1;
    }
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
