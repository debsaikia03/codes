#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> vec;
    int n;

    cout << "Enter size of vector: ";
    cin >> n;

    cout << "Enter the " << n << " elements: ";
    
    for (int i = 0; i < n; ++i) {
        int element;
        cin >> element;
        vec.push_front(element);
    }

    cout << "Vector elements: ";
    for (auto it : vec) {
        cout << it << " ";
    }
    
    cout << endl;

}
