#include <iostream>
#include <set>
using namespace std;


int main() {
    multiset<int,greater<int>> ms;

    ms.insert(5);
    ms.insert(3);
    ms.insert(5);
    ms.insert(2);

    for (int x : ms)
        cout << x << " ";  

    cout << "\nCount of 5: " << ms.count(5) << endl; 

    //Iterator to first element > x
    auto it=ms.upper_bound(3);
    cout<<"Upperbound "<<(*it)<<endl; 

    //Iterator to first element ≥ x
    auto it1=ms.lower_bound(3);
    cout<<"Lowerbound "<<(*it1)<<endl; 

    // Remove one occurrence of 5
    ms.erase(ms.find(5));
    
    for (int x : ms)
        cout << x << " ";  
}


/*
5 5 3 2 
Count of 5: 2
Upperbound 2
Lowerbound3
5 3 2 

*/