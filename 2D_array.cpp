#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> num(3, vector<int>(4, 0));

    for (int i = 0; i < num.size(); i++)
    {
        for (int j = 0; j < num.size(); j++)
        {
            cout << num[i][j] << " ";
        }
        cout << endl;
    }
}