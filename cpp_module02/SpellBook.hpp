#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class SpellBook{
    private:
        SpellBook(SpellBook const &other);
        SpellBook & operator=(SpellBook const & ref);
        std::map<std::string, ASpell *> _SpellBook;

    public:
       SpellBook();
        ~SpellBook();

        void learnSpell(ASpell *ref);
        void forgetSpell(std::string const &name);
        ASpell * createSpell(std::string const &name);
};

