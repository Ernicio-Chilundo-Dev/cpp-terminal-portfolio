#include <iostream>
#include <vector>
#include <thread>
#include <chrono>

using namespace std;

struct Projeto
{
    string titulo;
    string descricacao;
    string link;
};

void digitar(string texto, int delay =30){
    for (char c : texto)
    {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(delay));
    }
    cout << endl;
}
