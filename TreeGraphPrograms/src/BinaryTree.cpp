#include <iostream>
#include "Stack.cpp"

using namespace std;
class TreeNode {
    public:
    int value;
    TreeNode *left, *right;
    TreeNode(int value){
        this->value = value;
    }
};

class BinaryTree {
    public:
    TreeNode *root;
    BinaryTree(TreeNode *root){
        this->root = root;
    }

    void insert(int value){
        TreeNode *newNode = new TreeNode(value);
        if (this->root == NULL) {
            this->root = newNode;
            return;
        }
        TreeNode *current = root;
        while (1)
        {
            if (value > current->value) {
                if(current->right != NULL){
                    current = current->right;
                } else {
                    current->right = newNode;
                    break;
                }
            } else {
                if(current->left != NULL) {
                    current = current->left;
                } else {
                    current->left = newNode;
                    break;
                }
            }
        }
    }


    void inOrderSearch(){
        TreeNode *current = this->root;
        Stack<TreeNode> * stack;
        while (current != NULL)
        {
            cout << current->value;
        }
        
    }
};