#include "lib/bptree.h"
#include <iostream>
#include <queue>
using namespace std;

int main(){
    unsigned int internal_deg = 2;
    unsigned int leaf_deg = 5;
    bptree tree(internal_deg, leaf_deg);
    for(int i = 1; i < 21; i++){
        tree.insert(i);
        cout << "____________________________________________________________" << endl;
        cout << "Inserting " << i << endl;
        tree.print_cli();
    }

    cout << "NOW SEARCHING FOR 5" << endl;
    
    node* cursor = tree.search(5);

    cursor->print_cli_node();

    cout << endl;

    return 0;
}