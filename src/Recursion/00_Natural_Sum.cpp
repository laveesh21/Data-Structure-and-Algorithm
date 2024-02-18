//  Sum of all natural number upto n

#include<iostream>

int i=0, sum=0;

// Functional Recursion 
int fun(int i){
    if(i==0) return 0;
    return i + fun(i-1);
}


// Parameterised Recursion
int f(int i, int sum){
    if(i<1){
        std::cout<<"ANS: " << sum  << std::endl;
        return 0;
    }
    f(--i, sum+i);
    return 0;
}


int main(){

    f(6,0);  
    std::cout << "SUPER: " << fun(6); 

    return 0;
}