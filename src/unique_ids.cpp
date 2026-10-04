// 这个是AI帮忙写的，我不太会（@_@)
#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> nums[i];
    }

    std::sort(nums.begin(), nums.end());
    auto last = std::unique(nums.begin(), nums.end());
    nums.erase(last, nums.end());
    std::cout << nums.size() << "\n";

    for (size_t i = 0; i < nums.size(); i++)
    {
        std::cout << nums[i] << (i == nums.size() - 1 ? "" : "");
    }
    std::cout << std::endl;
    return 0;
}