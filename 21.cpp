#include <iostream>

using namespace std;

int main() {
    double a[9][3];
    int i, j;

    for(i=0; i<3; i++)

    for(j=0; j<4; j++)

    { 
    cout<<"Введiть елемент "<<i+1<<"-го рядка "<<j+1<<"-го стовпця: ";

    cin>>a[i][j];
    }

    int rowCount = 0;
    int r[9] = {0};

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 3; j++) {
            if (a[i][j] >= 50 && a[i][j] <= 100) {
                r[i]++;
            }
        }
        if (r[i] == 3) rowCount++;
    }

    double **b = new double*[rowCount];
    for (i = 0; i < rowCount; i++) 
        b[i] = new double[3];

    int k = 0;
    for (i = 0; i < 9; i++) {
        if (r[i] == 3) {
            for (j = 0; j < 3; j++) 
                b[k][j] = a[i][j];
            k++;
        }
    }

    if (rowCount == 0) {
        cout << "\nНемає рядків, що містять лише елементи в діапазоні [50, 100]." << endl;
    } else {
        cout << "\nМатриця що містить лише рядки з елементами в діапазоні [50, 100]:" << endl;
        for (i = 0; i < rowCount; i++) {
            for (j = 0; j < 3; j++) 
                cout << b[i][j] << "\t";
            cout << endl;
        }
    }

    for (i = 0; i < rowCount; i++) 
        delete[] b[i];
    delete[] b;

    return 0;
}
