#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> num(10);
    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << " ";
    }

    cout << endl;

    vector<int> nums(10, -1);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}