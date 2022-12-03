#include "funcs.h"
#include <vector>
//Task A
std::vector<int> makeVector(int n){
    std::vector<int> returnVector;
    for(int i = 0; i < n; i++){
        returnVector.push_back(i);
    }
    return returnVector;
}

//Task B
std::vector<int> goodVibes(const std::vector<int> &v){
    std::vector<int> returnVector;

    for(int i = 0; i < v.size();i++){
        if(v.at(i) >= 0){
            returnVector.push_back(v.at(i));
        }
    }

    return returnVector;
}

//Task C
void gogeta(std::vector<int> &goku, std::vector<int> &vegeta){
    for(int i = 0; i < vegeta.size();i++){
        goku.push_back(vegeta.at(i));
    }
    vegeta.clear();
}

//Task D
std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2){
    std::vector<int> returnVector;
    for(int i = 0; i < v1.size() && i < v2.size(); i++){
        returnVector.push_back(v1.at(i) + v2.at(i));
    }
    int diff = v1.size() - v2.size();
    if(diff > 0){
        for(int i = v2.size(); i < v1.size(); i++){
            returnVector.push_back(v1.at(i));
        }
    }
    else{
        for (int i = v1.size(); i < v2.size(); i++)
        {
            returnVector.push_back(v2.at(i));
        }
    }

    return returnVector;
}