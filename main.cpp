#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

class TreeNode {
public:
    // Pointer to the left child.
    TreeNode* left = nullptr;

    // Pointer to the right child.
    TreeNode* right = nullptr;

    // Value stored in this node.
    int value;

    // TODO: Implement the constructor here.
    TreeNode(int v);

    // TODO: Implement the destructor here.
    // Follow the lab's ownership model for child subtrees.
    ~TreeNode();
};

class Tree {
private:
    TreeNode* root = nullptr;

public:
    // TODO: Implement this destructor here.
    ~Tree();

    // FUNCTIONS THAT DO THE ACTUAL WORK
    // Replace each declaration's semicolon with your own function body.
    // These helpers receive the root of the subtree they work on.

    // TODO: Insert v. Equal values go right, as in the lab.
    void insert(int v, TreeNode*& subtree);

    // TODO: Find whether v is present.
    bool contains(int v, const TreeNode* subtree) const;

    // TODO: Return an extremal value.
    // Precondition for these two helpers: subtree is not null.
    int min(const TreeNode* subtree) const;
    int max(const TreeNode* subtree) const;

    // TODO: Remove one occurrence of v; absent values change nothing.
    void remove(int v, TreeNode*& subtree);

    // TODO: Print the corresponding traversal.
    void preorder(const TreeNode* subtree) const;
    void inorder(const TreeNode* subtree) const;
    void postorder(const TreeNode* subtree) const;
    void levelorder(const TreeNode* subtree) const;

    // PUBLIC WRAPPERS
    // TODO: Implement these here, using the corresponding helper.
    // The caller should not need direct access to root.
    void insert(int v);
    bool contains(int v) const;
    int min() const;
    int max() const;
    void remove(int v);
    void preorder() const;
    void inorder() const;
    void postorder() const;
    void levelorder() const;

    // OPTIONAL EXTRA PRACTICE
    // TODO: Implement after the core scope.
    int height(const TreeNode* subtree) const;
    int size(const TreeNode* subtree) const;
    int height() const;
    int size() const;
};

int main() {
    // TODO: Create a Tree once its destructor is implemented.
    // TODO: Insert 50, 30, 35, 61, 24, 58, 62, 32.
    // TODO: Print each of the four traversals with clear labels.
    // TODO: Try contains, min and max.
    // TODO: Test deletion of a leaf, a one-child node and a two-child node.
    // TODO: Test deleting the root and removing an absent value.
    // TODO: Test empty trees and repeated values.
    // TODO (optional): Read input until the lab's -1 sentinel.
}
