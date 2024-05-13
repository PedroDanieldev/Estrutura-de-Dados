#include <iostream>

using namespace std;

int main()
{
    float nota1,nota2,media;
    cout << "Digite sua primeira nota;" << endl;
    cin>>nota1;
    cout<<"digite sua segunda nota:"<<endl;
    cin>>nota2;
    media= (nota1*0.7)+(nota2*0.3);
    cout<<"sua media eh "<<media<<endl;
    return 0;
}
