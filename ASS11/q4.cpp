#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> waitlist;

    waitlist.push("Amit");
    waitlist.push("Riya");
    waitlist.push("Mohit");

    cout << "Next: " << waitlist.front() << endl;
    cout << "Last: " << waitlist.back() << endl;

    waitlist.pop();     // remove first person

    cout << "After serving, next is: " << waitlist.front() << endl;
}
