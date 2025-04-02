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
    int n = 0, i;
    
    cout << "Введіть кількість елементів n=";
    cin >> n;

    double* a = new double[n]; 

    cout << "Введіть " << n << " чисел:\n"; 

    int c = 0; 

    for (i = 0; i < n; i++) {    
        cin >> a[i];
        if (a[i] < 0) {  
            break;
        }
        c++;  
    }

    Sort(a, c); 

    cout << "\nМасив після сортування:\n";
    for (i = 0; i < c; i++)  
        cout << a[i] << "\t";

    delete[] a; 
    return 0;
}
