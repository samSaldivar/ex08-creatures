#ifndef EX08_CREATURES_ELF_H
#define EX08_CREATURES_ELF_H
#include <string>
#include "creature.h"

namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv13 {
                class elf : public Creature {
                public:
                    elf(int strength, int hit) : Creature(strength, hit) {
                    }
                    int getDamage() const;
                    const std::string &getSpecies() const;

                private:
                    const std::string species = "Elf";
                };
            }
        }
    }
}

#endif //EX08_CREATURES_ELF_H