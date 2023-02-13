#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *left;
  Node *right;
};

class BinaryTree {
private:
  Node *root;

public:
  BinaryTree() { root = NULL; }

  // Insert a new node into the tree
  void insert(int data) {
    Node *temp = new Node();
    temp->data = data;
    temp->left = temp->right = NULL;

    if (root == NULL) {
      root = temp;
    } else {
      Node *current = root, *parent;
      while (true) {
        parent = current;
        if (data < parent->data) {
          current = current->left;
          if (current == NULL) {
            parent->left = temp;
            break;
          }
        } else {
          current = current->right;
          if (current == NULL) {
            parent->right = temp;
            break;
          }
        }
      }
    }
  }

  // Search for a specific node in the tree
  bool search(int data) {
    Node *current = root;
    while (current != NULL) {
      if (current->data == data) {
        return true;
      } else if (current->data > data) {
        current = current->left;
      } else {
        current = current->right;
      }
    }
    return false;
  }

  // Delete a node from the tree
  void deleteNode(int data) {
    Node *current = root, *parent = NULL, *temp;
    while (current != NULL && current->data != data) {
      parent = current;
      if (data < parent->data) {
        current = current->left;
      } else {
        current = current->right;
      }
    }
    if (current == NULL) {
      cout << "Data not found!" << endl;
      return;
    }
    if (current->left == NULL && current->right == NULL) {
      if (parent == NULL) {
        root = NULL;
      } else if (parent->left == current) {
        parent->left = NULL;
      } else {
        parent->right = NULL;
      }
    } else if (current->right == NULL) {
      if (parent == NULL) {
        root = current->left;
      } else if (parent->left == current) {
        parent->left = current->left;
      } else {
        parent->right = current->left;
      }
    } else if (current->left == NULL) {
      if (parent == NULL) {
        root = current->right;
      } else if (parent->left == current) {
        parent->left = current->right;
      } else {
        parent->right = current->right;
      }
    } else {
      temp = current->right;
      while (temp->left != NULL) {
        temp = temp->left;
      }
      temp->left = current->left;
      if (parent == NULL) {
        root = current->right;
      } else if (parent->left == current) {
        parent->left = current->right;
      } else {
        parent->right = current->right;
      }
    }
    delete current;
  }

  // Traverse the tree in in-order
  void inOrderTraverse(Node *node) {
    if (node == NULL) {
      return;
    }
    inOrderTraverse(node->left);
    cout << node->data << " ";
    inOrderTraverse(node->right);
  }

  // Traverse the tree in pre-order
  void preOrderTraverse(Node *node) {
    if (node == NULL) {
      return;
    }
    cout << node->data << " ";
    preOrderTraverse(node->left);
    preOrderTraverse(node->right);
  }

  // Traverse the tree in post-order
  void postOrderTraverse(Node *node) {
    if (node == NULL) {
      return;
    }
    postOrderTraverse(node->left);
    postOrderTraverse(node->right);
    cout << node->data << " ";
  }

  // Get the root node of the tree
  Node *getRoot() { return root; }
};

int main() {
  BinaryTree tree;
  tree.insert(50);
  tree.insert(30);
  tree.insert(20);
  tree.insert(40);
  tree.insert(70);
  tree.insert(60);
  tree.insert(80);

  cout << "In-Order Traversal: ";
  tree.inOrderTraverse(tree.getRoot());
  cout << endl;

  cout << "Pre-Order Traversal: ";
  tree.preOrderTraverse(tree.getRoot());
  cout << endl;

  cout << "Post-Order Traversal: ";
  tree.postOrderTraverse(tree.getRoot());
  cout << endl;

  int num = 20;
  if (tree.search(num)) {
    cout << num << " is found in the tree" << endl;
  } else {
    cout << num << " is not found in the tree" << endl;
  }

  tree.deleteNode(30);
  cout << "In-Order Traversal after deleting 30: ";
  tree.inOrderTraverse(tree.getRoot());
  cout << endl;

  return 0;
}