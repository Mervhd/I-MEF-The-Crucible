#ifndef MISSION_HPP
#define MISSION_HPP

#include <string>

class Mission {
private:
    std::string name;
    int difficulty;
    int enemyCount;
    int reward;

public:
    Mission(const std::string& missionName, int diff, int enemies, int rew);
    void startMission();
    int calculateOutcome() const;
    std::string getName() const;
    int getDifficulty() const;
    int getReward() const;
};

#endif // MISSION_HPP
