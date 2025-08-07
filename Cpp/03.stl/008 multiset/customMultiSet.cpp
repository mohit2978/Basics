#include <iostream>
#include <set>
#include <string>
using namespace std;

struct MyClass {
    int i;
    string j;
    int k;

    // For printing
    friend ostream& operator<<(ostream& os, const MyClass& obj) {
        return os << "(" << obj.i << ", " << obj.j << ", " << obj.k << ")";
    }
};

int main() {
    auto cmp = [](const MyClass& a, const MyClass& b) {
        if (a.i != b.i) return a.i < b.i;   // ascending i
        return a.k > b.k;                   // descending k if i is equal
    };

    multiset<MyClass, decltype(cmp)> ms(cmp);

    ms.insert({2, "apple", 10});
    ms.insert({1, "banana", 20});
    ms.insert({2, "cherry", 15});
    ms.insert({1, "grape", 25});
    ms.insert({2, "mango", 5});

    for (const auto& item : ms)
        cout << item << endl;
}

/*
(1, grape, 25)
(1, banana, 20)
(2, cherry, 15)
(2, apple, 10)
(2, mango, 5)
*/