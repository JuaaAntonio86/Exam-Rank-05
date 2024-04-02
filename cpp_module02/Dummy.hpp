#pragma once

#include "ATarget.hpp"

#include <iostream>

class Dummy : public ATarget{

    public:
        Dummy();
        ~Dummy();
        ATarget * clone() const;
};
