#include <iostream>
#include "demon.h"
#include "creature.h"
#include <string>

namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv13 {
                int demon::getDamage() const {
                    int damage = Creature::getDamage();

                    if((rand() % 100)<5) {
                        damage = damage + 50;
                        std::cout << "Demonic attack inflicts 50" << "additional damage points!" << std::endl;
                        return damage;
                    }
                    else {
                        return damage;
                    }
                }
            }
        }
    }
}