#include <iostream>
#include "demon.h"
#include "creature.h"

namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv13 {
                int Demon::getDamage() const {
                    int damage;
                    damage = Creature::getDamage();
                    damage = damage + 50;
                    std::cout << "Demonic attack inflicts 50 " << "additional damage points!" << std::endl;
                    return damage;
                }
            }
        }
    }
}