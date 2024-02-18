#include<iostream>

bool palindrome(std::string &str, int i, int n){
    if(i>n-1-i)return true;
    if(str[i] != str[n-1-i] )return false;
    palindrome(str, i+1, n);
}

int main(){
    std::string str = "massam";
    std::cout << "RESULT: " << palindrome(str, 0, 5) << std::endl;    

    return 0;
}