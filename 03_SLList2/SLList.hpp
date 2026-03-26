#ifndef SLLIST_H
#define SLLIST_H

#include "SLLNode.hpp"

class SLList {

public:
    //  No-arg construct
    SLList();

    //  Copy constructor (TODO)
    SLList(const SLList& other);

    //  Assignment opperator (TODO)
    SLList& operator=(const SLList& other);

    //  The Destructor
    ~SLList();
    
    unsigned    size() const;   //  Returns the size of the list
    bool        empty() const;  //  Returns true if the list is empty
    void        push_front(int val);    //  Inserts the new node at the beginning
    void        print() const;          //  Print the list
    void        push_back(int val);     //  Insert the new node at the end
    void        pop_front();            //  Remove the first element (node)

    void        clear();                //  Clear the list

    //  (TODO)
    void        pop_back();             //  Remove the last element (node)

private:
    SLLNode* head;  //  The pointer to the first node
    SLLNode* tail;  //  The pointer to the last node
    unsigned list_size;

};



#endif