#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<string> history;

    history.push("Home");
    history.push("About");
    history.push("Contact");

    cout << "Current page: " << history.top() << endl;

    history.pop();  // undo

    cout << "After undo: " << history.top() << endl;

    if (history.empty())
        cout << "History empty";
}
