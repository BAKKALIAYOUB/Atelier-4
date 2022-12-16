#include <iostream>

using namespace std;

class Repas {
    private:
        string nom;
        int heure;
        string description;
        Chat *c;
        Element *e;
};

class Element{
    private:
        string nom,typee;

};

class Animal{
    protected:
        string nom;
        int age;
        string genre;
};

class Race{
    protected:
        string specefic;
        void israceHybride(){};
};

class Chat :public Animal{
    private:
        string type;
        Repas *r;
    public:
        void sauter(){};
};

class Chien : public Race{
    private:
        string taille;
        Entraineur *e;
    public:
        void ischass3(){};
};

class Entraineur {
    private:
        string nom;
        string description;
        Chien *c;
};

int main(){

}