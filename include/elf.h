#ifndef EX08_CREATURES_ELF_H
#define EX08_CREATURES_ELF_H
#include <string>
#include "creature.h"

namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv13 {
                class elf : public Creature {
                    virtual int getDamage() const;
                    virtual const std::string &getSpecies() const = 0;
                };
            }
        }
    }
}

#endif //EX08_CREATURES_ELF_H