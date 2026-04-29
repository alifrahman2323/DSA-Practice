#include <iostream>
using namespace std;

// Node structure for BST
struct Node {
    int data;
    Node* left;
    Node* right;
    
    // Constructor
    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Function to insert a node into BST
Node* insert(Node* root, int value) {
    // If tree is empty, create a new node
    if (root == nullptr) {
        return new Node(value);
    }
    
    // If value is less than root, insert in left subtree
    if (value < root->data) {
        root->left = insert(root->left, value);
    }
    // If value is greater than root, insert in right subtree
    else if (value > root->data) {
        root->right = insert(root->right, value);
    }
    
    return root;
}

// Function for inorder traversal (Left-Root-Right)
void inorder(Node* root) {
    if (root == nullptr) {
        return;
    }
    
    // First traverse left subtree
    inorder(root->left);
    
    // Then print current node
    cout << root->data << " ";
    
    // Then traverse right subtree
    inorder(root->right);
}

int main() {
    Node* root = nullptr;  // Start with empty tree
    
    // Insert the numbers into BST
    int numbers[] = {50, 30, 70, 20, 40, 60, 80};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    cout << "Inserting numbers into BST: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
        root = insert(root, numbers[i]);
    }
    cout << "\n\n";
    
    // Print inorder traversal
    cout << "Inorder Traversal of BST: ";
    inorder(root);
    cout << endl;
    
    return 0;
}