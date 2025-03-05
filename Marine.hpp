#ifndef	MARINE_HPP
#define MARINE_HPP	

#include <string>

class Marine {
private:
	std::string name;
	int health;
	int strength;
	int agility;
	int experience;

public:
	Marine(const std::string& marineName, int initialHealth,
		int initialStrength, int initialAgility);
	void train();					//Increase stats
	void deploy();					// Mark as deployed (for future mission logic)
	void takeDamage(int amount);	// Reduce health
	int getHealth() const;
	int getStrength() const;
	int getAgility() const;
	int getExperience() const;
	std::string getName() const;
};

#endif