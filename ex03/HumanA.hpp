#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"



class	HumanA
{
	private:
		std::string	_name;
		Weapon		&_weapon; // the reference member i needed, "the HumanA object stores a reference to that weapon"  its were to store the input

	public:
		//weapon is a reference parameter to the constructor 
		//so only exists for tis function call. so need to keep a 
		//ref to the weapon after the constructor finishes
		HumanA(std::string name, Weapon &weapon); // weapon gives the constructor a reference to a weapon.  its the input
		~HumanA();
		void	attack(void);
};


#endif