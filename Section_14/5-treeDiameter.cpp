#include <iostream>
#include <algorithm>

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int d) : data(d), left(nullptr), right(nullptr) {}
};

int diameter(Node* root, int& height) {
    if (!root) {
        height = 0;
        return 0;
    }
    int lh = 0, rh = 0;
    int ld = diameter(root->left, lh);
    int rd = diameter(root->right, rh);
    height = 1 + std::max(lh, rh);
    return std::max(lh + rh, std::max(ld, rd));
}

int diameter(Node* root) {
    int h = 0;
    return diameter(root, h);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    std::cout << diameter(root) << std::endl;
    return 0;
}