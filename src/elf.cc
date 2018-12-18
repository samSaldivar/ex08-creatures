#include <iostream>
#include "elf.h"
#include "creature.h"
#include <string>
#include <random>

namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv13 {
                const std::string &elf::getSpecies() const {
                    return species;
                }

                int elf::getDamage() const {
                    int damage;
                    damage = Creature::getDamage();
                        if ((rand()%10)==0) {
                            std::cout << "Magical attack inflicts " << damage<< "additional damage points!" << std::endl;
                            damage = damage * 2;
                            return damage;
                        }
                }
            }
        }
    }
}