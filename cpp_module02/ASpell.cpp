
#include "ASpell.hpp"

ASpell::ASpell(){}

ASpell::ASpell(ASpell const & other)
{
    *this = other;
}

ASpell & ASpell::operator=(ASpell const & other){
    this->_name = other.getName();
    this->_effects = other.getEffects();
    return (*this);
}

ASpell::ASpell(std::string name, std::string effects)
: _name(name), _effects(effects){}

ASpell::~ASpell(){}

std::string const & ASpell::getName() const{ return this->_name;}

std::string const & ASpell::getEffects() const{ return this->_effects;}

void ASpell::launch(ATarget const &ref) const{
 
        ref.getHitBySpell(*this);
}
