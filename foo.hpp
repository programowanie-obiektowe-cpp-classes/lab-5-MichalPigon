#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > v;
    for (auto it = people.rbegin(); it != people.rend(); it++)
    {
        it->birthday();
        if(it->isMonster()==true)
        {
            v.push_back('n');
        }
        else
        {
            v.push_back('y');
        }
    }
    return v;
}
