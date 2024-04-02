#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class TargetGenerator{
    private:
        TargetGenerator(TargetGenerator const &other);
        TargetGenerator & operator=(TargetGenerator const & ref);
        std::map<std::string, ATarget *> _TargetGenerator;

    public:
       TargetGenerator();
        ~TargetGenerator();

        void learnTargetType(ATarget *ref);
        void forgetTargetType(std::string const &name);
        ATarget *  createTarget(std::string const &name);
};

