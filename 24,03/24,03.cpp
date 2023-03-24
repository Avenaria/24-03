
/// Война с деревьями 
#include <iostream>
#include"Tree.h"
#include"Class.h"
using namespace std;
//
//struct Node
//{
//    int x; 
//    Node* left, * rigth;//указателит на потомков
//};
//
//void show(Node*& tree) {// удобнее использовать рекурсию( вызов сам себя)
//
//    if (tree != nullptr) {
//        show(tree->left);
//        cout << tree->x << "_+- ";
//        show(tree->rigth);
//
//    }
//
//}
//void Addtree(int x, Node*& tree) {
//    if (tree == nullptr) {
//        tree = new Node;
//        tree->x= x;
//        tree->left = tree->rigth = nullptr;
//    }
//
//    if (x < tree->x) {
//        if (tree->left != nullptr) {
//            Addtree(x, tree->left);
//        }
//        else {
//            tree->left = new Node;
//            tree->left->left = tree->left->rigth = nullptr;
//            tree->left->x = x;
//        }
//    }
//    if (x > tree->x) {
//        if (tree->rigth != nullptr) {
//            Addtree(x, tree->rigth);
//        }
//        else {
//            tree->rigth = new Node;
//            tree->rigth->left = tree->rigth->rigth = nullptr;
//            tree->rigth->x = x;
//        }
//    }
//
//
//}
//void del(Node*& tree) {
//    if (tree != nullptr) {
//        del(tree->left);
//        del(tree->rigth);
//        delete tree;
//    }
//
//}

int main()

{
    /*int x;
    Node* tree = nullptr;
   
   
    del(tree);*/
   /* Tree tree; 
    Node* n= nullptr;
    int x;
    for (int i{ 0 }; i < 5; i++) {
        x = rand() % 6;
        tree.Addtree(x, n);
        cout << x << " ";
    }*/
    List list;
    char s[] = "Hello World!! ";
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        list.Add(s[i]);
    }



}


