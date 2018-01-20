#include <iostream>
#include <string>

using namespace std;

void funkcja(string tekst) {
    cout << "Linia 1: ";
    int licznik {2};
    for(auto &znak : tekst) {
        cout << znak;
        if(znak == '\n') {
            cout << "Linia " << licznik++ << ": ";
        }
    }
}

int main() {
    string listDoM{"Narodowa galeria,\nwielka sztuka,\ntego jeszcze nie bylo."};
    cout << listDoM << endl << endl;
    funkcja(listDoM);

    return 0;
}
