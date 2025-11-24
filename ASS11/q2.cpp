#include <iostream>
#include <array>
#include <numeric>   // for accumulate
using namespace std;

int main() {
    array<double, 5> temperatures;

    temperatures.fill(0.0);       // set all values to 0.0

    cout << "Size = " << temperatures.size() << endl;

    temperatures[2] = 25.6;
    temperatures[4] = 30.2;

    double total = accumulate(temperatures.begin(),
                              temperatures.end(), 0.0);

    cout << "Total = " << total << endl;
}
