#include "node.h"

/**
 * @brief Split the node
 * 
 * @return std::pair<node*,int> 
 */
std::pair<node*,int> node::split(){
    //this node will be the left node
    //a new node will be created for right
    //the function returns the new node

    //if this is a leaf node:
    //the parent will have the middle key and so will the right child
    
    //if this is an internal node:
    //the children will be split and the right child will not have the middle key
    node* right_node = new node(this->is_leaf);

    //swapping next ptr
    node* temp = this->next;
    this->next = right_node;
    right_node->next = temp;

    int index = keys.size() / 2;

    // pop the middle key
    int middle_key = keys[index];

    //push back all the keys from the middle to the end to the right node
    for(unsigned int i = index+1; i < keys.size(); i++){
        right_node->keys.push_back(keys[i]);
    }
    keys.erase(keys.begin() + index, keys.end());

    //if this is an internal node, we need to move the children
    if(!this->is_leaf){
        //push back all the children from the middle to the end to the right node
        for(unsigned int i = index + 1; i < children.size(); i++){
            right_node->children.push_back(children[i]);
        }
        //erase the children from the middle to the end
        children.erase(children.begin() + index + 1, children.end());
    }
    else{
        //push middle key to the right node at index 0
        right_node->keys.insert(right_node->keys.begin(), middle_key);
    }

    //return right node and middle key
    return std::make_pair(right_node, middle_key);
}