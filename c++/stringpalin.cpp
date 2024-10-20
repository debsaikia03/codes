#include<iostream>
#include<algorithm>
#include<cctype>

using namespace std;

bool isPalin(string s1, string s2){

    return s1==s2;

}

int main(){

    string s = "Was it a car or a cat I saw?";

    string s1;

    for(int i=0; i<s.size(); i++){
        if(isalnum(s.at(i))){
           s1+=tolower(s.at(i));
        }
    }

    cout<<s1<<endl;

    string s2 = s1;

    reverse(s2.begin(),s2.end());

    cout<<s2;

    bool result = isPalin(s1,s2);

    cout<<endl<<result;
}