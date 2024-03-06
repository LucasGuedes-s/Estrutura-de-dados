#include <iostream>
using namespace std;
int main()
{
    int numeros[]= {1,2,3,4,8,15,10};
    int buscar = 0;
    int n = 7;
    
    cout<<"Digite um valor a ser encontrado: ";
    cin>>buscar;
    
    for(int i=0; i<n; i++){
        if(numeros[i] == buscar){
            cout << "Numero encontrado"<<endl;
            return 0;
        }
        
    }
    cout<<"Numero não encontrado"<<endl;
    return -1;

}
