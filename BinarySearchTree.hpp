#ifndef BINARY_SEARCH_TREE_HPP
#define BINARY_SEARCH_TREE_HPP

#include <iosfwd>

// Follow the lab policy: smaller keys go left; equal keys go right.
struct Node {
    int key;
    Node* left = nullptr;
    Node* right = nullptr;

    explicit Node(int value);
    ~Node();
};

class BinarySearchTree {
public:
    BinarySearchTree();
    ~BinarySearchTree();

    // One owner per node. Copying is deliberately unavailable.
    BinarySearchTree(const BinarySearchTree&) = delete;
    BinarySearchTree& operator=(const BinarySearchTree&) = delete;

    void insert(int value);
    bool contains(int value) const;
    const Node* find(int value) const;
    const Node* min() const;  // Empty tree: return nullptr.
    const Node* max() const;  // Empty tree: return nullptr.
    void remove(int value);  // Absent key: leave tree unchanged.

    void preorder(std::ostream& out) const;
    void inorder(std::ostream& out) const;
    void postorder(std::ostream& out) const;
    void levelorder(std::ostream& out) const;

    // Extra practice after the main test scope.
    int size() const;
    int height() const;      // Empty: -1. Leaf: 0.
    int leafCount() const;

private:
    Node* root = nullptr;

    // TODO: Define these helpers in BinarySearchTree.cpp.
    static void insert(Node*& subtree, int value);
    static bool contains(const Node* subtree, int value);
    static const Node* find(const Node* subtree, int value);
    static const Node* min(const Node* subtree);
    static const Node* max(const Node* subtree);
    static void remove(Node*& subtree, int value);

    static void preorder(const Node* subtree, std::ostream& out);
    static void inorder(const Node* subtree, std::ostream& out);
    static void postorder(const Node* subtree, std::ostream& out);
    static void levelorder(const Node* subtree, std::ostream& out);

    static int size(const Node* subtree);
    static int height(const Node* subtree);
    static int leafCount(const Node* subtree);
};

#endif
