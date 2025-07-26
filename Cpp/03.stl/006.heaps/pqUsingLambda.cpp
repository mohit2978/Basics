#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    // Min-heap lambda comparator (smaller values have higher priority)
    auto cmp = [](int left, int right) {
        return left > right;
    };

    // Declare min-heap priority queue using the lambda comparator
    priority_queue<int, vector<int>, decltype(cmp)> minHeap(cmp);

    // Push elements
    minHeap.push(10);
    minHeap.push(5);
    minHeap.push(20);
    minHeap.push(1);

    // Pop and print
    while (!minHeap.empty()) {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    //Output:1 5 10 20 

    return 0;
}