#include <iostream>
#include <vector>
#include <set>

int removeDuplicates(std::vector<int> &nums)
{
    std::set<int> setNums(nums.begin(), nums.end());

    int i = 0;
    for (int element : setNums)
    {
        nums[i] = element;
        i++;
    }

    return setNums.size();
}

int main()
{

    std::vector<int> arr = {1, 1, 1, 2, 2, 3, 3, 4, 4, 5};
    std::cout << removeDuplicates(arr);

    return 0;
}