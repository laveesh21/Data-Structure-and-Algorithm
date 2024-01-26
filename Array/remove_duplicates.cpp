#include<iostream>

int removeDuplicates(int arr[], int n){
    int res=1;
    for(int i=0; i<n; i++){
        if(arr[i]!=arr[res-1]){
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}

int main(){

    int arr[]= {10,20,20,30,40,40,40,50,50};
    int n = sizeof(arr)/sizeof(arr[0]);

    std::cout << removeDuplicates(arr, n);
    // std::cout << n;


    return 0;
}