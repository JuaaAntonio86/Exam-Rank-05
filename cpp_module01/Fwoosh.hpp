#pragma once

#include "ASpell.hpp"

#include <iostream>

class Fwoosh : public ASpell{

    public:
        Fwoosh();
        ~Fwoosh();
        ASpell * clone() const;
};
