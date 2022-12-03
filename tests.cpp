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