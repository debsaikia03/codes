#include<iostream>
using namespace std;

string recur(int n){
    
    if(n == 0){
        return "0";
    }

    if(n == 1){
        return "1";
    }

    return recur(n/2) + to_string(n%2);
}

int main(){

    int n;

    cout<<"Enter a number: ";
    cin>>n;

    string binary = recur(n);

    cout<<"Binary representation: "<<binary;
}