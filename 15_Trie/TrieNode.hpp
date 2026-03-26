//  inclusion guard

#define ALPHABET_SIZE 26

class TrieNode {
    public:
    
    TrieNode* children[ALPHABET_SIZE];
    bool end_of_word;
    
    TrieNode() : end_of_word(false) {
        //  initialize all children with nullptr
    }


};