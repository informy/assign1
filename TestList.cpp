#include<iostream>
# include <list> 
#include <unittest++/UnitTest++.h>
#include "List.hpp"

using namespace std;


int main()
{
    return UnitTest::RunAllTests();
}

TEST(size)
{


}


TEST ( it _ should_add_an_element_when_push_front_is_called)
{
List < int > list ;
list . push_front (42);
CHECK_EQUAL (42 , list . front ());
}


