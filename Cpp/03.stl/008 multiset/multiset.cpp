#include <iostream>
#include <set>
using namespace std;

/*
A multiset in C++ is a collection of elements that:

Can contain duplicate values

Stores elements in sorted order

Supports logarithmic time insertions, deletions, and lookups (internally uses a Red-Black Tree)

*/

int main() {
    multiset<int> ms;

    ms.insert(5);
    ms.insert(3);
    ms.insert(5);
    ms.insert(2);

    for (int x : ms)
        cout << x << " ";  // Output: 2 3 5 5

    cout << "\nCount of 5: " << ms.count(5) << endl; // 2

    //Iterator to first element > x
    auto it=ms.upper_bound(3);
    cout<<"Upperbound "<<(*it)<<endl; //Upperbound 5

    //Iterator to first element ≥ x
    auto it1=ms.lower_bound(3);
    cout<<"Lowerbound"<<(*it1)<<endl; //Lowerbound 3

    // Remove one occurrence of 5
    ms.erase(ms.find(5));
    
    for (int x : ms)
        cout << x << " ";  // Output: 2 3 5
}
