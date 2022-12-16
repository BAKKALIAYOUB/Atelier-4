#include <iostream>

using namespace std;

class Complexe
{
    private:
        int a,b;
    public:
        Complexe(){
            int a,b;
            cout<<"Entrer la partie réelle"<<endl;
            cin >>a;
            cout<<"Entrer la partie imaginaire"<<endl;
            cin >>b;

            this->a = a;
            this->b = b;
        }
        Complexe(int a,int b){
            this->a =a;
            this->b= b;
        }
        void displayComplexe(){
            cout <<this->a <<"+"<<this->b<<"i"<<endl;
        }
        void operator +(Complexe c){
            int c1 ,c2;
            c1 = this->a + c.a;
            c2 = this->b + c.b;
            Complexe somme(c1,c2);
            somme.displayComplexe();
        }
        void operator -(Complexe c){
            int c1 ,c2;
            c1 = this->a - c.a;
            c2 = this->b - c.b;
            Complexe difference(c1,c2);
            difference.displayComplexe();
        }
        void operator *(Complexe c){
            int c1 ,c2;
            c1 = (this->a * c.a) - (this->b *c.b);
            c2 = (this->a * c.b) + (this->b * c.a);
            Complexe produit (c1,c2);
            produit.displayComplexe();
        }

};

int main(){
    Complexe c1 , c2;

    c1.displayComplexe();

    c1.operator+(c2);

}