#ifndef	GEAR_HPP
#define GEAR_HPP

#include <string>


enum class GearType {Weapon, Armor, Accessory };

class Gear {
	private:
		std::string name;
		GearType type;
		int attackBonus;
		int defenseBonus;

	public:
		Gear(const std::string& gearName, GearType gearType, int atkBonus, int defBonus);
		void equip();
		void unequip();
		std::string getName() const;
		GearType getType() const;
		int getAttackBonus() const;
		int getDefenseBonus() const;

};

#endif // GEAR_HPP

