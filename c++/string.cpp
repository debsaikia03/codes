#include<iostream>
using namespace std;

int main()
{
    string str[3] = {"cow", "dog", "cat"}; 

    for(int i = 0; i < 3; i++) {
        cout << str[i] << " ";  
    }
    cout << endl;

   
   string s = "india";
   
   int n = s.size();
   char ch = s.at(0);

   cout<<ch;
   cout<<" ";
   cout<<n;
}
