#include<iostream>

int bitwise_and(int left, int right){
    int count;
    while(left!=right){
        left >>= 1;
        right >>= 1;
        count++;
    }
    return left << count;
}

int main(){

    int left, right;
    std::cin >> left, right;

    bitwise_and(left, right);

    return 0;
}