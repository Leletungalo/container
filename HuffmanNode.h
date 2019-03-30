#ifndef HUFFMANNODE_H_
#define HUFFMANNODE_H_

#include <string>

namespace NGLLEL001{
    class HuffmanNode
    {
    private:
        std::string letter;
        int friq;

    public:
        HuffmanNode(std::string lett,int friency);
        ~HuffmanNode();
        HuffmanNode(const HuffmanNode& rhs);
        HuffmanNode(HuffmanNode&& rhs);
    };


    
    
}
#endif