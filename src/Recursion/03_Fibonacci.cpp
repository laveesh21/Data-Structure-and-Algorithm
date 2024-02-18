#include<iostream>

int f(int n){
    if(n<=1){
        return n;
    }
    int last = f(n-1);
    int slast = f(n-2);

    return last + slast;
}

int main(){

    std::cout << f(7);

    return 0;
}