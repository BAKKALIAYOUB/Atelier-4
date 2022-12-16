#include <list>
#include <iostream>

using namespace std;

list<int> triAbull(list<int> l){
    list<int>::iterator it1;
    list<int>::iterator it2;
    
    for(it1 = l.begin() , it2=next(it1,1) ; it2 !=l.end()  ; it1++ , it2++)
    {
            if(*it1 > *it2){
                int tmp= *it1;
                *it1 = *it2;
                *it2 = tmp;
            }
    }
    return l;
}   

int main(){
    list <int> l;
    list <int> sortedlist;
    for(int i=0 ; i<=10 ; i++){
        int a;
        cin>>a;
        l.insert(l.end(),a);
    }

    sortedlist = triAbull(l);
    for(list<int>::iterator it=sortedlist.begin() ; it!=sortedlist.end() ; it++){
        cout << *it <<endl;
    }

}