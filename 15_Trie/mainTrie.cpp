#include "Trie.hpp"
#include <iostream>

int main() {

    Trie trie;

    
    std::vector<std::string> v {
    "QJXPT","MNBVC","LKJHG","ASDFG","ZXAVB","PLMKO","IJUHY","TGBAF","REWQA","YUIOP",
    "HGFDS","TREWA","QAZWS","EDCRF","VTGBY","HAUJM","KOLPI","MNQAE","RTYUI","OPASD",
    "FAHJK","LAXCV","BNMAS","QWERT","YUIZS","DFGHJ","KLPOI","MNBAC","XZASD","QWEZX",
    "RTABN","UIOPL","KJHGF","DSAMN","BVFRT","GHYUI","JKLOP","QAZXC","WSXED","CRFVT",
    "BRXTA","QWPLM","ZKJHF","UYDNC","EOGSV","LPTKR","MXQAZ","VJHUB","CNSYE","TWRLO",
    "KZPDI","FAMQX","HUVSC","RJLYT","UYASJ","DXKPM","SCEZA","YTRHQ","ILVFU","NMBXK",
    "PQZTR","AWXLC","VHSOE","JMKUY","DFNBR","TGLPI","ZORXA","CYQWV","HESML","UKBJT",
    "RPDXF","NQWAZ","LVYTC","SGHOK","MBRJU","XATQP","WZLNE","KCFYD","OUPVH","ITRMS",
    "QJXLO","YBTVK","ZMPRE","HADWS","FCLGN","URXQI","VEOKT","NLSYB","GWPDA","MHTUZ"
    };

    for (int i = 0; i < v.size(); i++) {
        trie.insert(v.at(i));
    }


    // trie.insert("and");
    // trie.insert("dog");
    // trie.insert("face");

    // trie.insert("abc");
    // trie.insert("xyz");
    // trie.insert("abcd");

    //std::cout << trie.search("abc") << std:: endl;
    //std::cout << trie.search("abd") << std:: endl;

    trie.print();

    return 0;
}