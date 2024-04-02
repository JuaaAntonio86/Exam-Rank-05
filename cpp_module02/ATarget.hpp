#pragma once 

#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"


class ASpell;

class ATarget{
    private:
        std::string _type;

    public:
        ATarget();
        ATarget(ATarget const & other);
        ATarget & operator=(ATarget const & other);
        ATarget(std::string type);
        virtual  ~ATarget();
        std::string const & getType() const;

        virtual ATarget * clone() const = 0;
        void    getHitBySpell(ASpell const & ref) const;
};
