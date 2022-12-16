#include <iostream>
#include <list>
#include <algorithm>

using namespace std;
class Personne
{
    private:
        string nom,prenom;
        int age;
    public:
        Personne(string n , string p , int age){

            this->nom = n;
            this->prenom = p;

            this->age = age;
        }
        bool operator<(Personne p1 ){
            return nom < p1.nom;
        }
        void display(){
            cout <<"Nom :"<<this->nom<<endl;
            cout <<"Prenom :"<<this->prenom<<endl;
            cout <<"Age :"<<this->age<<endl;
        }
};  

int main(){
    Personne p1("c" , "c", 20);
    Personne p2("b" , "b", 20);
    Personne p3("e" , "e", 20);
    Personne p4("a" , "a", 20);

    list<Personne> p;
    p.push_front(p1);
    p.push_front(p2);
    p.push_front(p3);
    p.push_front(p4);

    p.sort();

    for (list <Personne>::iterator it=p.begin() ; it != p.end() ; it++){
       (*it).display();
    }
}