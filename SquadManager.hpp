#ifndef SQUAD_MANAGER_HPP
#define SQUAD_MANAGER_HPP

#include <vector>
#include "Marine.hpp"
#include "Mission.hpp"

class SquadManager {
private:
    std::vector<Marine> marines;

public:
    SquadManager();
    void addMarine(const Marine& marine);
    void assignMission(const Mission& mission);
    int simulateBattle(const Mission& mission);
    std::vector<Marine>& getMarines();
};

#endif // SQUAD_MANAGER_HPP