#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int,string> student;
    student.first = 1;
    student.second = "Alice";

    cout << "Roll No: " << student.first << ", Name: " << student.second << endl;

    pair<pair<int,char>, int> complexPair = {{2, 'B'}, 20};
    cout << "Roll No: " << complexPair.first.first << ", Section: " << complexPair.first.second;
    cout << ", Marks: " << complexPair.second << endl;

    /*
    Roll No: 1, Name: Alice
    Roll No: 2, Section: B, Marks: 20
    */

    return 0;
}