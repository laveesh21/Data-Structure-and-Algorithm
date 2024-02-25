#include<iostream>

int gcd(int n, int m){

    if(m==0){
        return n;
    }
    int res = n%m;

return gcd(m, res);
}

int main(){

    int n,m;
    std::cin >> n >> m;

    std::cout << gcd(n,m);

    return 0;
}