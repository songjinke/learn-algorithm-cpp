#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> myQueue;
    myQueue.push(10);
    myQueue.push(20);
    cout << myQueue.front() << endl;
    myQueue.pop();
    cout << myQueue.front() << endl;
    myQueue.pop();
}
