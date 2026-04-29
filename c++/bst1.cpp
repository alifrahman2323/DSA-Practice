/*#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};
Node* insert(Node* root, int val){
    if (root == NULL){
        return new Node(val);
    }

    if (val < root->data){
        root->left = insert(root->left, val);
    } else {
        root->left = insert(root->right, val);
    }

}
Node* buildBST(vector<int> arr){
    Node* root = NULL;
    for(int val: arr){
        root = insert(root, val);
    }
    return root;
}
int main(){
    vector<int> arr = {3,2,1,5,6,4};
    Node* root = buildBST(arr);

    return 0;
} */


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

// Create new node
Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Insert node in BST
Node* insert(Node* root, int value) {

    if (root == NULL)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);

    return root;
}

// Inorder Traversal
void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

// Search in BST
bool search(Node* root, int key) {

    if (root == NULL)
        return false;

    if (root->data == key)
        return true;

    if (key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}

int main() {

    Node* root = NULL;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    cout << "Inorder Traversal: ";
    inorder(root);

    cout << endl;

    if (search(root, 70))
        cout << "Element Found";
    else
        cout << "Element Not Found";

    return 0;
}