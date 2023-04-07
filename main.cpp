#include "lib/bptree.h"
#include <iostream>
using namespace std;


void print_node(node* n){
    cout << "Keys: ";
    cout << "[";
    for(auto i: n->keys){
        cout << i << "|";
    }
    cout << "]";
}

int main(){
    unsigned int internal_deg = 3;
    unsigned int leaf_deg = 3;
    bptree tree(internal_deg, leaf_deg);
    tree.insert(2);
    print_node(tree.get_root());
    cout << endl;
    tree.insert(1);
    print_node(tree.get_root());
    cout << endl;
    tree.insert(3);
    print_node(tree.get_root());
    cout << endl;
    tree.insert(7);
    print_node(tree.get_root());
    cout << endl;
    tree.insert(6);
    print_node(tree.get_root());
    cout << endl;
    tree.insert(5);
    print_node(tree.get_root());
    cout << endl;
    tree.insert(4);
    print_node(tree.get_root());
    cout << endl;
    tree.insert(9);
    print_node(tree.get_root());
    cout << endl;
    tree.insert(8);
    print_node(tree.get_root());
    cout << endl;
    tree.insert(7);
    print_node(tree.get_root());
    cout << endl;
    tree.insert(6);
    print_node(tree.get_root());
    cout << endl;
    tree.insert(5);
    print_node(tree.get_root());
    cout << endl;
    tree.insert(4);
    print_node(tree.get_root());
    cout << endl;
    tree.insert(9);
    print_node(tree.get_root());
    cout << endl;
    tree.insert(8);
    print_node(tree.get_root());
    cout << endl;
    tree.insert(7);
    print_node(tree.get_root());
    cout << endl;
    tree.insert(6);
    print_node(tree.get_root());
    cout << endl;
    tree.insert(5);
    print_node(tree.get_root());
    cout << endl;
    tree.insert(4);
    print_node(tree.get_root());
    cout << endl;
    tree.insert(9);
    print_node(tree.get_root());
    cout << endl;
    tree.insert(8);
    print_node(tree.get_root());
    cout << endl;
}