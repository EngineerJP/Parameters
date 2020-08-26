#include <iostream>

using namespace std;

void printCode(int x){
    cout << "Jake's favorite number is " << x << endl;
}
void printMom(int y){
    cout << "His Mom's favorite number is " << y << endl;
}
void printDad(int z){
    cout << "His Dad's favorite number is " << z << endl;
}

int main()
{
    printCode(20);
    printMom(15);
    printDad(3);
    return 0;
}
