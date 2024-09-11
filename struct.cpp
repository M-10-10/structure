#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int n ;
struct STUDENT {
    char surname[20];
    char name[20];
    char y[4];
    
    
    
};
void St(STUDENT  obj1[], int n)
{
    STUDENT temp;
    for (int i = 0; i <= n; i++) {
        for (int j = n - 1; j > i; j--) {
            if (strcmp(obj1[j].surname, obj1[j - 1].surname) < 0) {
                temp = obj1[j];
                obj1[j] = obj1[j - 1];
                obj1[j - 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {

        cout << obj1[i].surname << '  ' << obj1[i].name<<" " << obj1[i].y << endl;
    }
}

void main() {
    int i, j, k;
    cin >> n;
    STUDENT obj[100];
    for (i = 0; i < n; i++) {
        cout << "Familija: " << i << ":\n";
        cin >> obj[i].surname;
        cout << "Imya: " << i << ":\n";
        cin >> obj[i].name;
       
        cout << "Year: " << i << ":\n";
        cin >> obj[i].y;
        
    }
    St(obj, n);
    
    }
   
    
