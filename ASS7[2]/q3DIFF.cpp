#include <iostream>
using namespace std;

class Matrix {
    int a[2][2];
public:
    void input() {
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                cin >> a[i][j];
    }

    void show() {
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }

    friend Matrix operator*(Matrix m1, Matrix m2);
};

Matrix operator*(Matrix m1, Matrix m2) {
    Matrix r;
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++) {
            r.a[i][j] = 0;
            for(int k=0;k<2;k++)
                r.a[i][j] += m1.a[i][k] * m2.a[k][j];
        }
    return r;
}

int main() {
    Matrix m1, m2, m3;
    m1.input();
    m2.input();
    m3 = m1 * m2;
    m3.show();
}
