#include <iostream>

using namespace std;

int main()
{
    int escolhas;
    int fat=1;
    cout<<"escolha o numero para descobrir o fatorial :"<<endl;
    cin>>escolhas;
    for(int i=1;i<=escolhas;i++){
        fat=fat*i;
    }
    cout<<"O fatorial eh :"<< fat<<endl;

    return 0;
}
