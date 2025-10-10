#include "easyfind.hpp"

int main(void)
{
    try
    {
        std::deque<int> deque;
        deque.push_back(1);
        deque.push_back(2);
        deque.push_back(3);
        deque.push_back(4);
        std::deque<int>::iterator it_deque = find_occurrence(deque, 4);
        std::cout <<  *it_deque << std::endl;
    }
    catch(const NotFoundException &e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
