#include <iostream>
#include <list>
using namespace std;

int main() {

    list<int> list;
    int n;

    cout << "Enter size of list: ";
    cin >> n;

    cout << "Enter the " << n << " elements: ";
    
    for (int i = 0; i < n; ++i) {
        int element;
        cin >> element;
        list.push_front(element);
    }

    cout << "List elements (reverse): ";
    for (auto it : list) {
        cout << it << " ";
    }
    
    cout << endl;

    int element, pos;

    cout<<"\nEnter element to insert: ";
    cin>> element;

    cout<<"Enter position to insert: ";
    cin>> pos;

    if(pos <= 0 || pos > list.size()){
        cout<<"Invalid position!";
        return 1;
    }

    auto it = list.begin();

    advance(it, pos-1);

    list.insert(it, element);

    cout << "\nUpdated list elements: ";
    for (auto it : list) {
        cout << it << " ";
    }
}

