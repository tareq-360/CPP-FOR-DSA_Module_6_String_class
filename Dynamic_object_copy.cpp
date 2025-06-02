#include<bits/stdc++.h>
using namespace std;
class player{
    public:
    string country;
    int jursy;
    player(string country,int jursy){
        this->country=country;
        this->jursy=jursy;
    }
};
int main(){
    player* dhoni= new player("pandia",30);
    player* kohli= new player("india",100);
    // kohli->jursy=dhoni->jursy;
    // kohli->country=dhoni->country;
    *kohli=*dhoni;
    //cout<<dhoni.country<<endl;
    delete dhoni;
    cout<<kohli->jursy<<" "<<kohli->country<<endl;
    return 0;
}