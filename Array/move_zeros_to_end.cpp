#include<iostream>
#include<vector>

int* moveZeros(int arr[], int n){
    int res=0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            std::swap(arr[i], arr[res]);
            res++;
        }
    }
    return arr;
}

int main(){

    int arr[] = {12,0,0,4,6,0,0,5,0,1};
    int* newArr = moveZeros(arr,10);
    
    for(int i=0; i<10; i++){
        std::cout << newArr[i] <<std::endl;
    }

    return 0;
}