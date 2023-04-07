#include "lib/bptree.h"
#include <iostream>
using namespace std;


void print_node(node* n){
    cout << "[";
    for(auto i: n->keys){
        cout << i << "|";
    }
    cout << "]";
}

void print_root(node* root){
    print_node(root);
    cout << endl;
    vector<node*> lv2;
    if(!root->is_leaf){
        for(auto i: root->children){
            print_node(i);
            cout << " ";
            if(!i->is_leaf){
                for(auto j: i->children){
                    lv2.push_back(j);
                }
            }
        }
    }
    cout << endl;
    for(auto i: lv2){
        print_node(i);
        cout << " ";
    }
    cout << endl;
}

int main(){
    unsigned int internal_deg = 3;
    unsigned int leaf_deg = 3;
    bptree tree(internal_deg, leaf_deg);
    for(int i = 1; i < 11; i++){
        tree.insert(i);
        cout << "Inserting " << i << endl;
        print_root(tree.get_root());
        cout << "------------------" << endl;
    }
}