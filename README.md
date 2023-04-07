# B+ Tree Implementation in C++

This repository contains an implementation of a B+ tree data structure in C++. The implementation consists of two classes: bptree and node, which represent the B+ tree and its nodes, respectively.

## Features

- Efficient search, insertion, and deletion operations on the B+ tree.
- Customizable degree for the internal and leaf nodes of the tree.

## Getting Started

To use the B+ tree implementation, simply include the bptree.h and node.h header files in your project. Then, create a bptree object with the desired degree for the internal and leaf nodes. You can then perform search, insertion, and deletion operations on the tree using the member functions provided by the bptree class.

```cpp
#include "bptree.h"

int main() {
    // Create a B+ tree with internal degree 4 and leaf degree 3
    bptree my_tree(4, 3);

    // Insert a key into the tree
    my_tree.insert(42);

    // Search for a key in the tree
    node* result = my_tree.search(42);

    // Remove a key from the tree
    my_tree.remove(42);
}
```

## Contributing

Contributions to this B+ tree implementation are welcome! If you would like to contribute, please fork this repository and submit a pull request with your changes.

## License

This B+ tree implementation is licensed under the MIT License. See the LICENSE file for details.

## Acknowledgements

This implementation was inspired by the B+ tree data structure described in the book "Introduction to Algorithms" by Cormen, Leiserson, Rivest, and Stein. I thank [Dr. Padmalochan Bera](https://www.iitbbs.ac.in/profile.php/padmalochanbera/), our instructor at Database Systems Course at IIT Bhubaneswar, without whose stimulating assignments with tight deadlines, this implementation would not have been possible. (I would be too lazy to implement it, and would have just used the STL map instead.)