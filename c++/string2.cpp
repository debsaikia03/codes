#include<iostream>
using namespace std;
 
int main(){
    
    string str1, str2;
    char ch;

    cout<<"Enter a string: ";
    cin >> str1;  //takes string until whitespace
 
    cout<<str1;

    cout<<"\nEnter a string: ";
    getline(cin, str2);  //takes all the string including whitespace

    cout<<str2;

    cout<<"\nEnter a character: ";
    cin.get(ch);   //takes only a character

    cout<<ch;
}
 
