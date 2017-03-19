#include <iostream>
#include <conio.h> //definisi prototipe 

using namespace std;

void tambah(int a, int b); 
void kurang(int a, int b); 

int main() { 
tambah(10, 12); 
tambah(100, 200); 
kurang(30, 45); 
kurang(200, 125); 
getch(); 
} 

void tambah(int a, int b) { 
cout << a + b << endl;
} 

void kurang(int a, int b) { 
cout << a - b << endl; 
}
