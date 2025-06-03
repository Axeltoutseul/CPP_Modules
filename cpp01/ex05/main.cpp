#include "Harl.hpp"

int main(void)
{
    Harl message;
    message.complain("DEBUG");
    message.complain("INFO");
    message.complain("WARNING");
    message.complain("ERROR");
    return 0;
}
