#include <iostream>
using namespace std;

int main(){
    try {
        throw 3.14;   // throwing double
    }
    catch(...){
        cout << "Default catch: some exception occurred" << endl;
    }
}
