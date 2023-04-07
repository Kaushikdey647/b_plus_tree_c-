#include "node.h"

unsigned int node::search_key(int key){
        
    return std::upper_bound(keys.begin(), keys.end(), key) - keys.begin();
}