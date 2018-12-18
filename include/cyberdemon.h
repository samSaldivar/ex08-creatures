#ifndef EX08_CREATURES_CYBERDEMON_H
#define EX08_CREATURES_CYBERDEMON_H
#include "demon.h"

namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv13 {
                class cyberdemon : public demon {
                public:
                    const std::string &getSpecies() const;
                    cyberdemon(int strength, int hit) : demon(strength, hit){
                    }

                    int getDamage() const;

                private:
                    const std::string species = "Cyber Demon";
                };
            }
        }
    }
}
#endif //EX08_CREATURES_CYBERDEMON_H
