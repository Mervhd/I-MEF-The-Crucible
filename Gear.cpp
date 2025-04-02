#include "Gear.hpp"


Gear::Gear(const std::string& gearName, GearType gearType, int atkBonus, int defBonus)
    : name(gearName), type(gearType), attackBonus(atkBonus), defenseBonus(defBonus) {
}

void Gear::equip() {
    // Placeholder: Will boost Marine stats in Step 4
}

void Gear::unequip() {
    // Placeholder: Will remove boosts later
}

std::string Gear::getName() const { return name; }
GearType Gear::getType() const { return type; }
int Gear::getAttackBonus() const { return attackBonus; }
int Gear::getDefenseBonus() const { return defenseBonus; }