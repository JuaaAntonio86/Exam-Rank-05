#pragma once

#include "ATarget.hpp"

#include <iostream>

class BrickWall : public ATarget{

    public:
        BrickWall();
        ~BrickWall();
        ATarget * clone() const;
};
