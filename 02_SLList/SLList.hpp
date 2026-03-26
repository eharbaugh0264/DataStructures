#ifndef SLLIST_H
#define SLLIST_H

#include "SLLNode.hpp"

class SLList {

public:
    //  No-arg construct
    SLList();
    
    unsigned    size() const;   //  Returns the size of the list
    bool        empty() const;  //  Returns true if the list is empty
    void        push_front(int val);    //  Inserts the new node at the beginning
    void        print() const;          //  Print the list

    //  TODO void   
    void        push_back(int val);     //  Insert the new node at the end

private:
    SLLNode* head;
    SLLNode* tail;
    unsigned list_size;

};



#endif