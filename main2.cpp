#include <iostream>
#include <list>

using namespace std;

int main(){
    int i;
    list<int> vetor;
    list<int>::iterator iter;

    int tam = 10;
    vetor.push_front(3);
    vetor.push_front(4);
    vetor.push_front(5);
    vetor.push_front(1);
    vetor.push_front(2);

    vetor.sort();
  
    cout << "Tamanho da lista: " << vetor.size() << endl;
    cout << "primeiro elemento: " << vetor.front() << endl;
    cout << "ultimo elemento: " << vetor.back() << endl;

    tam = vetor.size();
    for(i=0;i<tam;i++){
        cout << vetor.front() << endl;
        vetor.pop_front();
    }

    cout << "Tamanho da lista: " << vetor.size() << endl; 

    system("pause");
    system("cls");
    return 0;
}
