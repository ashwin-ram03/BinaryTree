#include <iostream>
#include "BT.h"


int main() {
    BinaryTree ashwinsTree;
    Node* Node1 = new Node();
    Node* Node2 = new Node();
    Node* Node3 = new Node();
    Node* Node4 = new Node();
    Node* Node5 = new Node();
    Node* Node6 = new Node();
    Node* Node7 = new Node();

    Node1->data = 1;
    Node2->data = 2;
    Node3->data = 3;
    Node4->data = 4;
    Node5->data = 5;
    Node6->data = 6;
    Node7->data = 7;

    Node1->leftChild = Node2;
    Node1->rightChild = Node3;
    Node2->leftChild = Node4;
    Node2->rightChild = Node5;
    Node3->leftChild = Node6;
    Node3->rightChild = Node7;

    ashwinsTree.ROOT_NODE = Node1;
    ashwinsTree.print();

    delete Node1;
    return 0;

}
