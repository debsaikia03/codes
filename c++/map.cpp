#include<iostream>
#include<map>
using namespace std;

int main(){

    map<string, int> m;

    int n;

    cout<<"Enter the no. of key-value pairs: ";
    cin>> n;

    for(int i=0; i<n; i++){

        string key;
        int value;

        cout<<"Enter key "<<i+1<<": ";
        cin>>key;

        cout<<"Enter corresponding value "<<i+1<<": ";
        cin>> value;

        m[key] = value;
    }

    m["Grapes"] = 5;
    
    cout<<"The elements are: \n";

    for(const auto &it : m){

        cout<<it.first<<" -> "<<it.second<<"\n";
    }

    cout << endl;
}
 
