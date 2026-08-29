#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
	:_name(name), _weapon(weapon)   // since _weapon is a reference "&" member it needs to be bonded to the object at creation time  so needs to be done before entering the brakets
{}

HumanA::~HumanA(){}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
