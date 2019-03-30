#include <iostream>
#include <string>
#include <fstream>
#include <memory>
#include <unordered_map>
#include <queue>

#include "HuffmanNode.h"

using namespace std;
unordered_map<char,int> m1;
void readFile(string filename);
int main(int agrc, char* argv[]){
    if (agrc == 1) {
        cout << "no input" << endl;
        return 0;
    }
    //shared_ptr<NGLLEL001::HuffmanNode> prt;
   // shared_ptr<NGLLEL001::HuffmanNode> prt5;
    //priority_queue<NGLLEL001::HuffmanNode::HuffmanNode, NGLLEL001::HuffmanNode::compare> q1;
    string inputFileName = string(argv[1]);
    readFile(inputFileName);
    for(auto& i:m1){
        cout << i.first << " " << i.second << endl; 
    }
    
    return 0;
}

void readFile(string filename){
    
    ifstream file(filename);
    //m1[] = 
    string lile;
    while(getline(file,lile)){
        int count = 0;
        for(auto i = lile.begin(); i != lile.end();i++)
        {
            char a = lile.at(count);

            auto search = m1.find(a);
            if (search != m1.end()) {
                int friq = search->second;
                friq++;
                m1[a] = friq;
            }else
            {
                m1[a] = 1;
            }
            count++;
        }
        
    }

    file.close();
}