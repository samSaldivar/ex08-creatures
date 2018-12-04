#ifndef EX08_CREATURES_ELF_H
#define EX08_CREATURES_ELF_H


namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv13 {
                class elf : public Creature {
                    vitual int getDamage() const;
                    vitual const std::String &getSpecies() const = 0;
                };

            }
        }
    }
}

#endif //EX08_CREATURES_ELF_H
