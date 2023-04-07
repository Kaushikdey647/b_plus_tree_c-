#include "bptree.h"
#include <iostream>
#include <queue>

/**
 * @brief Print the tree
 * 
 */
void bptree::print_cli(){
    if (root == NULL) {
        std::cout << "Tree is empty" << std::endl;
        return;
    }
    
    std::queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        int level_size = q.size();
        for (int i = 0; i < level_size; i++) {
            node* current = q.front();
            q.pop();
            std::cout << "[";
            for (int j = 0; j < current->keys.size(); j++) {
                std::cout << current->keys[j] << "|";
            }
            std::cout << "] ";
            if (!current->is_leaf) {
                for (int j = 0; j < current->children.size(); j++) {
                    q.push(current->children[j]);
                }
            }
            if (current->next != NULL && current->is_leaf) {
                std::cout << "-> ";
            }
        }
        std::cout << std::endl;
    }
}