#include <iostream>
#include <set>
#include <vector>

using namespace std;

bool findset1(set <int> s , int a){
    
    auto find = s.find(a);
    if(find != s.end()){
        return true;
    }
    else{
        return false;
    }
}

bool findset2(set <int>::iterator t1 , set <int>::iterator t2 , int x){
    for(auto a =t1 ; a!= t2 ; a++){
        if(*a == x){
            return true;
        }
    } 
    return false; 
}

template <class Iterator1 ,class Iterator2>
bool finset3(Iterator1 t1 , Iterator1 t2 ,int x){
    for(auto a =t1 ; a!= t2 ; a++){
        if(*a == x){
            return true;
        }
    }  
    return false;
}

int main(){
    set <int> s;
    vector <int>v;
    for(int i=0 ; i<=100 ; i++){
        s.insert(i);
    }
    for(int i=0 ; i<=100 ; i++){
        v.push_back(i);
    }

    if(findset1(s,2) == true){
        cout <<"La valeur entrer est trouve"<<endl;
    }
    else{
        cout <<"La valeur entrer n' est pas trouve"<<endl;
    }

    set<int>::iterator it1 =s.begin(); 
    set<int>::iterator it2 =s.end(); 

    if(findset2(it1 , it2,900) == true){
        cout <<"La valeur entrer est trouve"<<endl;
    }
    else{
        cout <<"La valeur entrer n' est pas trouve"<<endl;
    }
//test de la fonction template pour les sets
    if(finset3 < set<int>::iterator ,set<int>::iterator >(it1 , it2,900) == true){
        cout <<"La valeur entrer est trouve"<<endl;
    }
    else{
        cout <<"La valeur entrer n' est pas trouve"<<endl;
    }
//test de la fonction template pour les vector
    vector<int>::iterator it_vector1 = v.begin();
    vector<int>::iterator it_vector2 = v.end();
    if(finset3 < vector<int>::iterator ,vector<int>::iterator >(it_vector1 , it_vector2,900) == true){
        cout <<"La valeur entrer est trouve"<<endl;
    }
    else{
        cout <<"La valeur entrer n' est pas trouve"<<endl;
    }
    
}