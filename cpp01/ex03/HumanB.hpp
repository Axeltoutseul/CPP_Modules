#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP
#include "Weapon.hpp"

class HumanB {

    public:

    HumanB(std::string name);
    ~HumanB(void);

    void attack(void);
    void setWeapon(Weapon &_weapon);


    private:

    std::string name;
    Weapon *_weapon;
};

#endif
