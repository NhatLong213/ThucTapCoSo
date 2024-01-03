#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

// Tao mot node moi 
Node* createNode(int x) {
    Node* newNode = new Node();
    newNode->data = x;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Them node vao cay nhi phan tim kiem 
Node* insertNode(Node* root, int x) {
    if (root == NULL) {
        return createNode(x);
    }

    if (x < root->data) {
        root->left = insertNode(root->left, x);
    } else if (x > root->data) {
        root->right = insertNode(root->right, x);
    }

    return root;
}

// Tim kiem mot mode trong cay nhi phan 
Node* searchNode(Node* root, int x) {
    if (root == NULL || root->data == x) {
        return root;
    }

    if (x < root->data) {
        return searchNode(root->left, x);
    }

    return searchNode(root->right, x);
}

// Ham tim node có gia tri nho nhat trong cay con ben trai cua mot node cho truoc 
Node* minValueNode(Node* node) {
    Node* current = node;

    while (current && current->left != NULL) {
        current = current->left;
    }

    return current;
}

// Xoa node trong cay nhi phan 
Node* deleteNode(Node* root, int x) {
    if (root == NULL) {
        return root;
    }

    if (x < root->data) {
        root->left = deleteNode(root->left, x);
    } else if (x > root->data) {
        root->right = deleteNode(root->right, x);
    } else {
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        Node* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

// Duyet cay theo hinh thuc Left-Node-Right (in ra cac node theo thu tu tang dan)
void inorderTraversal(Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

// Ham them mang vao cay nhi phan 
Node* insertArray(Node* root, vector<int>& arr) {
    for (int i = 0; i < arr.size(); ++i) {
        root = insertNode(root, arr[i]);
    }
    return root;
}


int main() {
        Node* root = NULL;
    int choice, x;
    vector<int> values;

    cout << "Menu:" << endl;
    cout << "1. Them node vao cay BST" << endl;
    cout << "2. Tim kiem node trong cay BST" << endl;
    cout << "3. Xoa node trong cay BST" << endl;
    cout << "4. In ra cay BST hien tai" << endl;
    cout << "5. Thoat" << endl;

    while (true) {
        cout << "Nhap lua chon cua ban: ";
        cin >> choice;

        switch (choice) {
            case 1:
                int arrSize;
                cout << "Nhap so luong gia tri can them vao cay BST: ";
                cin >> arrSize;
                cout << "Nhap cac gia tri: ";
                for (int i = 0; i < arrSize; ++i) {
                    cin >> x;
                    values.push_back(x);
                }
                root = insertArray(root, values);
                values.clear();
                break;
            case 2:
                cout << "Nhap gia tri can tim kiem trong cay BST: ";
                cin >> x;
                if (searchNode(root, x) != NULL) {
                    cout << "Tim thay gia tri " << x << " trong cay BST." << endl;
                } else {
                    cout << "Khong tim thay gia tri " << x << " trong cay BST." << endl;
                }
                break;
            case 3:
                cout << "Nhap gia tri can xoa trong cay BST: ";
                cin >> x;
                root = deleteNode(root, x);
                break;
            case 4:
                cout << "Cay BST hien tai: ";
                inorderTraversal(root);
                cout << endl;
                break;
            case 5:
                cout << "Thoat chuong trinh." << endl;
                return 0;
            default:
                cout << "Lua chon khong hop le. Vui long nhap lai." << endl;
        }
    }

    return 0;
}
