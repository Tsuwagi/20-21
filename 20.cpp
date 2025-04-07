//Ввести деяку послідовність дійсних чисел і створити динамічний масив з чисел, розміщених до першого від’ємного числа (якщо від’ємних чисел немає, вибрати всі). 
//За допомогою функції розмістити елементи масиву у порядку зростання значень

#include<iostream>
using namespace std;

void Sort(double a[], int c) {

    int i, j;

    for (i = 0; i < c - 1; i++)
        for (j = 0; j < c - 1 - i; j++)
            if (a[j] > a[j + 1]) {
                double tea = a[j];   
                a[j] = a[j + 1];        
                a[j + 1] = tea;        
            }
}

int main() {
    int n;
    cout << "Введіть кількість елементів n = ";
    cin >> n;
    
    double* b = new double[n];
    
    int c = 0; 

    cout << "Введіть " << n << " чисел:\n";

    for (int i = 0; i < n; i++) {
        double x;
        cin >> x;
        if (x < 0) {
            break;
        }
        b[c++] = x;
    }

    double* a = new double[c];
    for (int i = 0; i < c; i++) {
        a[i] = b[i];
    }

    delete[] b; 

    Sort(a, c);

    cout << "\nМасив після сортування:\n";
    for (int i = 0; i < c; i++) {
        cout << a[i] << "\t";
    }

    delete[] a;
    return 0;
}
