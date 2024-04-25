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
//   Definition for a binary tree node.
 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
  


//  problem link https://leetcode.com/submissions/detail/1235054169/


class Solution {
public:
       void dfs(TreeNode* root, string s, string &smallest){
        if(root==NULL) return ;
        s+=char('a'+root->val);
        if(root->left ==NULL && root->right==NULL){
        reverse(s.begin(),s.end());
        if(smallest.empty() || s<smallest){
            smallest=s;
        }
        reverse(s.begin(), s.end());
       }
       dfs(root->left ,s,smallest);
       dfs(root->right,s,smallest);
       }
    string smallestFromLeaf(TreeNode* root) {
       string  smallest;
       dfs(root,"",smallest);
       return smallest;    
    
    }
};

// The TreeNode struct and the Solution class should be included here

int main() {
    // Create a sample binary tree
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);
    // Add more nodes to the tree as needed to test different scenarios

    // Create an instance of the Solution class
    Solution solution;

    // Call the smallestFromLeaf method and display the result
    std::cout << "Smallest lexicographically string from leaf to root: " << solution.smallestFromLeaf(root) << std::endl;

    return 0;
}
