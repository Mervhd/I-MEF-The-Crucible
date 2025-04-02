#include "Mission.hpp"

Mission::Mission(const std::string& missionName, int diff, int enemies, int rew)
    : name(missionName), difficulty(diff), enemyCount(enemies), reward(rew) {
}

void Mission::startMission() {
    // Placeholder for mission logic in Step 4
}

int Mission::calculateOutcome() const {
    return 100 - difficulty; // Placeholder: Higher difficulty = lower success chance
}

std::string Mission::getName() const { return name; }
int Mission::getDifficulty() const { return difficulty; }
int Mission::getReward() const { return reward; }