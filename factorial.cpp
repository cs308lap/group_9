#include "functions.h"
#include <iostream>

int factorial(int n){
    while(n<0){
        std::cout<<"Please re-enter a positive number";
        return 0;
    }
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
