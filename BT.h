//
// Created by Ashwin Ram
//

#ifndef TREETRAVERSAL_BT_H
#define TREETRAVERSAL_BT_H
#include <iostream>
using namespace std;


class Node{
public:
    int data;
    Node* leftChild;
    Node* rightChild;

    Node(){
        data = 0;
        leftChild = rightChild = nullptr;
    }
    ~Node(){
        delete leftChild;
        delete rightChild;
    }
};

class BinaryTree{
public:
    Node* ROOT_NODE;

    void print(){
        print(ROOT_NODE);
    }

    void print(Node* root){
        if(root==nullptr) return;

        //Preorder DFS traversal

        /**
        cout << root->data << "" << endl;
        print(root->leftChild);
        print(root->rightChild);
         **/



        //In order DFS traversal

        print(root->leftChild);
        cout << root->data << "" << endl;
        print(root->rightChild);


        //post order DFS traversal
        /**
        print(root->leftChild);
        print(root->rightChild);
        cout << root->data << "" << endl;
         **/


    }

};




#endif //TREETRAVERSAL_BT_H
