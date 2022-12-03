#include <iostream>
#include "funcs.h"
#include <vector>
#include <string>

std::string vectorToString(std::vector<int> &v){
    std::string returnString = "{";
    for(int i = 0; i < v.size();i++){
        returnString += std::to_string(v.at(i));
        if(i != v.size() - 1){
            returnString += ",";
        }
    }
    returnString += "}";
    return returnString;
}

    int main()
{
    //Task A
    std::vector<int> test_vector = makeVector(15);
    std::cout << "TASK A:\nmakeVector(15) -> " << vectorToString(test_vector) << "\n";

    //Task B
    std::vector<int> vB{1, 2, -1, 3, 4, -1, 6};
    test_vector = goodVibes(vB);
    std::cout << "\nTASK B:\nvB = " << vectorToString(vB) << "\ngoodVibes(vB) -> " << vectorToString(test_vector) << "\n";

    //Task C
    std::vector<int> vC1{1, 2, 3};
    std::vector<int> vC2{4, 5};
    
    std::cout << "\nTASK C:\n";
    std::cout << "vC1 = " << vectorToString(vC1) << " vC2 = " << vectorToString(vC2) << "\n";
    std::cout << "gogeta(vC1, vC2) -> " << "\n";
    std::cout << "vC1 = " << vectorToString(vC1) << " vC2 = " << vectorToString(vC2) << "\n";

    //Task D
    std::vector<int> vD1{1, 2, 3};
    std::vector<int> vD2{4, 5};
    std::cout << "\nTASK D:\n";
    std::cout << "vD1 = " << vectorToString(vD1) << " vD2 = " << vectorToString(vD2) << "\n";
    test_vector = sumPairWise(vD1, vD2);
    std::cout << "sumPairWise(vD1, vD2) -> " << vectorToString(test_vector) << "\n";

    return 0;
}