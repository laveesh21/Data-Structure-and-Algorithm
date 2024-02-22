#include<iostream>
#include<vector>

    int missingNumber(std::vector<int>& nums) {
        int ans = nums.size();
        for(int i=0; i<nums.size(); i++){
            ans ^= i ^ nums[i];
        }
        return ans;
    }   

int main(){

    int n=0;
    std::cin >> n;
    std::vector<int> nums;
    int input=0;

    for(int i=0; i<n; i++){
        std::cin >> input;
        nums.push_back(input);
    }

    for(int i=0; i<n; i++){
        std::cout <<  nums[i] << " -> ";
    }

    std::cout << "Missing Number: " << missingNumber(nums);

    return 0;
}