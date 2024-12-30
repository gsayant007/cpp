#include <iostream>
#include <vector>
#include <array>
#include <string>
#include "functions.h"

using namespace std;

int factorial(int n){
    int pivot = 1;
    if(n==1){
        return 1; 
    }
    else{
        for(int k=1;k<=n;k++){
            pivot = k* pivot;
        }
    }
    return pivot;
}