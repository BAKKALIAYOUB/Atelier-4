#include <iostream>
#include <vector>

using namespace std;

void extraireDate(string date){
    if(date.length() !=12){
        cout<<"Erreur!!";
    }
    else{
        cout <<date.substr(0,2)<<"/" <<date.substr(2,2)<<"/"<<date.substr(4,4)<<" "<<date.substr(8,2)<<":"<<date.substr(10,2)<<endl;
    }
}

int main(){
    extraireDate("120920221651");
}