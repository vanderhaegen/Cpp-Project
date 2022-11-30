#include <iostream>
#include <queue>
using namespace std;

void print_menu(){
    cout << "Menu" << endl;
    cout << "Selecione uma opção:" << endl;
    cout << "1) Visualizar dados" << endl;
    cout << "2) asdfasdfasdf" << endl;
    cout << "3) Encerrar programa" << endl;
    }

int main(){
    int var=0;
    while(var!=3){
        print_menu();
        cout << endl;
        cin >> var;
        cout << endl;
        if(var==1){
            cout << "Visualizando dados" << endl;
        }
        else if(var==2){
            cout << "asdfasdfasdf" << endl;
        }
        if(var!=3){
            cout << endl;
            cout << "-----//-----//-----//-----//-----" << endl;
            cout << endl;
        }
    }
    cout << "Encerrando o programa";
}
