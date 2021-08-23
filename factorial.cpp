#include "functions.h"
#include <iostream>

int factorial(int n){
    while(n<0){
        // cout<<"Please re-enter a positive number";
        return -1;
    }
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
