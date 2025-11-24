#include <iostream>
#include <vector>
#include <algorithm>   // for sort
using namespace std;

int main() {
    vector<int> scores;

    scores.push_back(50);
    scores.push_back(90);
    scores.push_back(70);

    scores.pop_back();     // removes 70

    cout << "scores[0] = " << scores[0] << endl;
    cout << "scores.at(1) = " << scores.at(1) << endl;

    scores.push_back(30);
    scores.push_back(80);

    sort(scores.begin(), scores.end());   // sorting

    cout << "All elements: ";
    for (vector<int>::iterator it = scores.begin(); it != scores.end(); it++)
        cout << *it << " ";
}
