
#include "ATarget.hpp"

ATarget::ATarget(){}

ATarget::ATarget(ATarget const & other)
{
    *this = other;
}

ATarget & ATarget::operator=(ATarget const & other){
    this->_type = other.getType();
    return (*this);
}

ATarget::ATarget(std::string type)
: _type(type){}

ATarget::~ATarget(){}

std::string const & ATarget::getType() const{ return this->_type;}

void ATarget::getHitBySpell(ASpell const &ref) const{
std::cout
        << this->_type << " has been " << ref.getEffects() << "!"
        <<std::endl;
}
