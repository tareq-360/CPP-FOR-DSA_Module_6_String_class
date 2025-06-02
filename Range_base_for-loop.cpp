#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;cin>>name;
    cout<<name<<endl;
    // for(int i=0;i<name.size();i++){
    //     cout<<name[i]<<endl;
    // }
    for(char c: name){ //simple way for print
        cout<<c<<endl;
    }
    int a[]={10,11,23,11,32,33,22};
    //cout<<sizeof(a)/sizeof(a[0])<<endl;
    for(int i : a){
        cout<<i<<endl;
    }
    
    return 0;
}