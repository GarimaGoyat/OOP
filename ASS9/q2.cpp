#include <iostream>
using namespace std;

// bubble sort template
template <class T>
void bubbleSort(T a[], int n){
    for(int i=0; i<n-1; i++)
        for(int j=n-1; j>i; j--)
            if(a[j] < a[j-1])
                swap(a[j], a[j-1]);
}

template <class T>
void print(T a[], int n){
    for(int i=0; i<n; i++) cout << a[i] << " ";
    cout << endl;
}

int main(){
    int a[5] = {5,2,9,1,7};
    float b[5] = {5.5,1.1,3.3,2.2,0.9};

    bubbleSort(a,5);
    bubbleSort(b,5);

    print(a,5);
    print(b,5);
}
