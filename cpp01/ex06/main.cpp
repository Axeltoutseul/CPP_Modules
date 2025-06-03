#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl message;

    if (argc != 2)
    {
        std::cout << "You must have one argument." << std::endl;
        return -1;
    }
    else
    {
        if (argc == 1)
            message.complain("");
        else
            message.complain(argv[1]);
    }
    return 0;
}
