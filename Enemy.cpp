#include <string>
#include <vector>

class EnemyManager {
public:

    struct Enemy {
        int EnemyNumber;
        std::string EnemyName;

        Enemy(int num, const std::string& name) : EnemyNumber(num), EnemyName(name) {

        }

    };

    std::vector<Enemy> EnemyStorage = {};

    void AddEnemy(int num, const std::string& name) {
        EnemyStorage.push_back(Enemy(num, name));
    }
};
