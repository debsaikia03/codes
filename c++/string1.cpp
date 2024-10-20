#include<iostream>
using namespace std;

void push(char arr[], char ch,int &top){
    top++;
    arr[top] = ch;
}

void pop(int &top){
   top--;
}

bool isValid(string s) {
    
    int n = s.size();

    if(s.at(0) == ')' || s.at(0) == '}' || s.at(0) == ']' || n%2 != 0){
        return false;
    }

    char arr[n];

    int top=-1;

    for(int i=0; i<n; i++){

        push(arr,s.at(i),top);

        if(arr[top] == ')'  && arr[top-1] == '(' || arr[top] == '}' && arr[top-1] == '{' || arr[top] == ']'  && arr[top-1] == '[')
        {
            pop(top);
            pop(top);
        } 

    }

    if(top != -1){
        return false;
    }

    return true;
}

int main()
{
    string s = "(){}}{";

    cout<<isValid(s);


}
