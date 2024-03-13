#include <iostream>
using namespace std;

class Pessoa {
    public:
        Pessoa(string nome, int idade);
        void apresentar();
    private:
        string nome;
        int idade;
};