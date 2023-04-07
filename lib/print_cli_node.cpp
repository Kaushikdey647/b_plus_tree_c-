#include "node.h"
#include <iostream>

/**
 * @brief Print the node
 * 
 */
void node::print_cli_node(){
    std::cout << "[";
    for(auto i: keys){
        std::cout << i << "|";
    }
    std::cout << "]";
}