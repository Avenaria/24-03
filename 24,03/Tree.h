//#pragma once
//#include <iostream>
//using namespace std;
//
//struct Node
//{
//    int x;
//    Node* left, * rigth;//указателит на потомков
//};
//
//
//class Tree
//{
//    Node* tree;
//public:
//    Tree() {
//        tree = nullptr;
//    };
//    ~Tree() {}
//    void show(Node* tree);
//    void Addtree(int x, Node* tree);
//    void del(Node* tree);
//};
//    void Tree:: show(Node* tree) {// удобнее использовать рекурсию( вызов сам себя)
//
//        if (tree != nullptr) {
//            show(tree->left);
//            cout << tree->x << "_+- ";
//            show(tree->rigth);
//
//        }
//
//    }
//    void Tree:: Addtree(int x, Node* tree) {
//        if (tree == nullptr) {
//            tree = new Node;
//            tree->x = x;
//            tree->left = tree->rigth = nullptr;
//        }
//
//        if (x < tree->x) {
//            if (tree->left != nullptr) {
//                Addtree(x, tree->left);
//            }
//            else {
//                tree->left = new Node;
//                tree->left->left = tree->left->rigth = nullptr;
//                tree->left->x = x;
//            }
//        }
//        if (x > tree->x) {
//            if (tree->rigth != nullptr) {
//                Addtree(x, tree->rigth);
//            }
//            else {
//                tree->rigth = new Node;
//                tree->rigth->left = tree->rigth->rigth = nullptr;
//                tree->rigth->x = x;
//            }
//        }
//
//
//    }
//    void Tree:: del(Node* tree) {
//        if (tree != nullptr) {
//            del(tree->left);
//            del(tree->rigth);
//            delete tree;
//        }
//
//    }
//

