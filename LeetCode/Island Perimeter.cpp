#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <cstring>
#include <unordered_map>
#include <set>
#include <queue>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#include <limits.h>
#include <string.h>
#include <list>
using namespace std;
// https://leetcode.com/submissions/detail/1235931791/
class Solution
{
public:
    int islandPerimeter(std::vector<std::vector<int>> &grid)
    {
        int p = 0;
        int r = grid.size();
        int c = grid[0].size();
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (grid[i][j] == 1)
                {
                    p += 4;
                    if (i > 0 && grid[i - 1][j] == 1)
                        p -= 2;
                    if (j > 0 && grid[i][j - 1] == 1)
                        p -= 2;
                }
            }
        }
        return p;
    }
};

int main()
{
    Solution solution;

    // Example grid initialization
    std::vector<std::vector<int>> grid = {
        {0, 1, 0, 0},
        {1, 1, 1, 0},
        {0, 1, 0, 0},
        {1, 1, 0, 0}};

    int perimeter = solution.islandPerimeter(grid);

    std::cout << "The perimeter of the island is: " << perimeter << std::endl;

    return 0;
}
