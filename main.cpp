#include <iostream>
#include <vector>
#include "functions.h"

using namespace std;

int main(){
    printf("hello from the main file!\n");
    float num1 = 1;
    float num2 = 2;
    int num3 = 5;

    vector arr = {34,90,23,11,12,12,7,5};
    cout <<"the factorial is:"<<factorial(num3) << endl<<"\n";
    cout <<"The multiplication is:"<< multiply(num1,num2) << endl<<"\n";
    bubbleSort(arr);
    print();

    return 0;
}