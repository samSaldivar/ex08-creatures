#ifndef EX08_CREATURES_HUMAN_H
#define EX08_CREATURES_HUMAN_H
#include <string>
#include "creature.h"

namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv13 {
                class human : public Creature {
                public:
                    human(int strength, int hit) : Creature(strength, hit) {

                    }
                    const std::string &getSpecies() const;

                private:
                    const std::string species = "human";
                };
            }
        }
    }
}

#endif //EX08_CREATURES_HUMAN_H