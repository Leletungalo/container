#include <iostream>
#include <string>
#include "HuffmanNode.h"

using namespace std;
NGLLEL001::HuffmanNode::HuffmanNode(string latt,int friency){
    letter = latt;
    friq = friency;
}

NGLLEL001::HuffmanNode::HuffmanNode(const NGLLEL001::HuffmanNode::HuffmanNode& rhs):letter(rhs.letter){
    
}
NGLLEL001::HuffmanNode::HuffmanNode(NGLLEL001::HuffmanNode::HuffmanNode&& rhs):letter(move(rhs.letter)),friq(rhs.friq){
    
}