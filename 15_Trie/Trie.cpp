#include "Trie.hpp"
#include <string>
#include <cctype>
#include <iostream>

Trie::Trie() {
    root = new TrieNode();
}


void Trie::insert(const std::string& s) {
    TrieNode*cur = root;
    for (char c : s) {
        if (!isalpha(c)) {
            continue;
        }
        int i = tolower(c) - 'a';
        //std::cout << i << std::endl;
        if (!cur->children[i]) {
            cur->children[i] = new TrieNode();
        }
        cur = cur->children[i];
    }
    cur->end_of_word = true;
}



bool Trie::search(const std::string& s) const {
    TrieNode* cur = root;

    for (char c : s) {
        int i = tolower(c) - 'a';
        if (!cur->children[i]) {
            return false;
        }
        cur = cur->children[i];
    }
    return cur->end_of_word;
}

void Trie::print() const {
    std::string word;
    int count = 0;
    print(root, word);
}

void Trie::print(const TrieNode* node, std::string word) const {
    
    //  check all children
    //  if the child exists
    //  add character to the word
    //  reccursion
    //  remove the character from the word

    //  base case
    if (!node) {
        return;
    }

    //  print word when reached
    if (node->end_of_word) {
        std::cout << word << std::endl;
    }

    //  call all non-nullptr pointers provided letter paths
    for (char i = 'a'; i <= 'z'; i++) {
        if (node->children[i - 97]) {
            word += i;
            print(node->children[i - 97], word);
            word.pop_back();
        }
    }

}
