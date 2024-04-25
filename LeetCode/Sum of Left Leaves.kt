import java.util.*

// Definition for a binary tree node.
class TreeNode(var `val`: Int) {
    var left: TreeNode? = null
    var right: TreeNode? = null
}

class Solution {
    fun sumOfLeftLeaves(root: TreeNode?): Int {
        fun sum(root: TreeNode?, isLeft: Boolean): Int {
            if (root == null) {
                return 0
            }
            if (root.left == null && root.right == null && isLeft) {
                return root.`val`
            }
            return sum(root.left, true) + sum(root.right, false)
        }
        return sum(root, false)
    }
}

fun main() {
    // Example usage:
    val root = TreeNode(3)
    root.left = TreeNode(9)
    root.right = TreeNode(20)
    root.right?.left = TreeNode(15)
    root.right?.right = TreeNode(7)

    val solution = Solution()
    val sumOfLeft = solution.sumOfLeftLeaves(root)
    println("Sum of left leaves in the binary tree: $sumOfLeft")
}

// 1. Recursive solution
// Time: O(n)
// Space: O(n)



