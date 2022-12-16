#include <iostream>

using namespace std;

class Point  {
private:
    double x,y;
protected:
    string nom;
public:
    Point(double x , double y, string nom){
        this->x=x;
        this->y=y;
        this->nom=nom;
    }
    double getX(){
        return this->x;
    }
    double getY(){
        return this->y;
    }
    string getNom(){
        return this->nom;
    }
    void setX(double x){
        this->x = x;
    }
    void setY(double y){
        this->y=y;
    }
    void setNom(string NOM){
        this->nom =NOM;
    }
    void afficher(){
        cout << "Nom :"<<this->nom<<endl;
        cout << "X ="<<this->x<<endl;
        cout << "Y ="<<this->y<<endl;
    }
};

class PointCouleur : public Point {
private:
    unsigned int couleur;
public:
    PointCouleur(double x , double y , string nom , unsigned int couleur):Point(x,y,nom){
        this->couleur = couleur;
    }
    unsigned int getCouleur(){
        return this->couleur;
    }
    void setCouleur(unsigned int c){
        this->couleur =c;
    }
    void afficher(){
        afficher();
        cout << "Couleur ="<<this->couleur<<endl;
    }
};

int main(){

}