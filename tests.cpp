#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include <vector>

TEST_CASE("TASK A")
{
    std::vector<int> test_vector = makeVector(100);
    bool works = true;
    for(int i = 0; i < test_vector.size();i++){
        if(test_vector.at(i) != i){
            works = false;
            break;
        }
    }
    CHECK(works);

    test_vector = makeVector(0);
    CHECK(test_vector.size() == 0);

    test_vector = makeVector(-5);
    CHECK(test_vector.size() == 0);
}

TEST_CASE("TASK B")
{
    std::vector<int> test_vector{1, 2, -1, 3, 4, -1, 6};
    std::vector<int> compare_vector{1, 2, 3, 4, 6};
    test_vector = goodVibes(test_vector);
    CHECK(test_vector == compare_vector);

    test_vector = {-1,-2,-3,-4};
    compare_vector = {};
    test_vector = goodVibes(test_vector);
    CHECK(test_vector == compare_vector);

    test_vector = {};
    compare_vector = {};
    test_vector = goodVibes(test_vector);
    CHECK(test_vector == compare_vector);
}

TEST_CASE("TASK C"){
    
}