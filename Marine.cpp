#include "Marine.hpp"

Marine::Marine(const std::string& marineName, int initialHealth, int initialStrength, int initialAgility)
    : name(marineName), health(initialHealth), strength(initialStrength), agility(initialAgility), experience(0) {
    // Constructor initializes all attributes
}

void Marine::train() {
    strength += 5;
    agility += 5;
    experience += 10;
}

void Marine::deploy() {
    // Placeholder for deployment logic (e.g., mark as active for missions)
}

void Marine::takeDamage(int amount) {
    health -= amount;
    if (health < 0) health = 0; // No negative health
}

int Marine::getHealth() const { return health; }
int Marine::getStrength() const { return strength; }
int Marine::getAgility() const { return agility; }
int Marine::getExperience() const { return experience; }
std::string Marine::getName() const { return name; }