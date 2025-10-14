#include "easyfind.hpp"

int main(void)
{
    try
    {
        std::vector<int> vec(4);
        vec[0] = 1;
        vec[1] = 2;
        vec[2] = 3;
        vec[3] = 4;
        std::vector<int>::iterator it_vec = find_occurrence(vec, 4);

        std::deque<int> deque;
        deque.push_back(1);
        deque.push_back(2);
        deque.push_back(3);
        deque.push_back(4);
        std::deque<int>::iterator it_deque = find_occurrence(deque, 4);

        std::list<int> list;
        list.push_back(1);
        list.push_back(2);
        list.push_back(3);
        list.push_back(4);
        std::list<int>::iterator it_list = find_occurrence(list, 4);

        std::cout <<  *it_vec << std::endl;
        std::cout <<  *it_deque << std::endl;
        std::cout <<  *it_list << std::endl;
    }
    catch(const NotFoundException &e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
