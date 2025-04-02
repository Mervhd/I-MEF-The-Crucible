#include "SquadManager.hpp"

SquadManager::SquadManager() {
}

void SquadManager::addMarine(const Marine& marine) {
    marines.push_back(marine);
}

void SquadManager::assignMission(const Mission& mission) {
    // Placeholder: Will trigger simulation in Step 4
}

int SquadManager::simulateBattle(const Mission& mission) {
    int totalStrength = 0;
    for (const Marine& marine : marines) {
        totalStrength += marine.getStrength();
    }
    return totalStrength > mission.getDifficulty() ? 1 : 0; // 1 = win, 0 = lose
}

std::vector<Marine>& SquadManager::getMarines() {
    return marines;
}