#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> Lista_de_amadas;
    int numero_de_lineas;
    cin>>numero_de_lineas;
    string pais,nombre;
    for (int i = 0; i < numero_de_lineas; ++i) {
        cin>>pais;
        getline (cin,nombre);
        Lista_de_amadas[pais]++;
    }
    for(auto elem : Lista_de_amadas){
        cout <<elem.first << " " << elem.second<<"\n";
    }
    return 0;
}

