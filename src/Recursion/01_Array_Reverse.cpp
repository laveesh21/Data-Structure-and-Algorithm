#include<iostream>

// REVERSE ARRAY WITH RECURSION
void f(int arr[], int i, int n){
    if(i==n/2)return;
    std::swap(arr[i], arr[n-1-i]);
    f(arr, i+1, n);
}




int main(){

    int arr[]= {1,2,3,4,5,6};
    f(arr,0,6);

    for(auto a: arr){
        std::cout << a << std::endl;
    }
    


    return 0;
}