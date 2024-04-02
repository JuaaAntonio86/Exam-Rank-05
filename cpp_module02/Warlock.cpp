#include "Warlock.hpp"

Warlock::Warlock(std::string const & name, std::string const & title)
: _name(name), _title(title)
{
    std::cout
        << this->_name << ": This looks like another boring day."
        << std::endl;
}

Warlock::~Warlock(){
    std::cout
        << this->_name << ": My job here is done!"
        << std::endl;
 
}

std::string const & Warlock::getName() const{return this->_name;}

std::string const & Warlock::getTitle() const{return this->_title;}

void Warlock::setTitle(std::string const &title){ 
    this->_title = title;
}

void Warlock::introduce() const{
    std::cout
        << this->_name << ": I am " << this->_name 
        << ", " << this->_title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *ref){
        _SpellBook.learnSpell(ref);
}

void Warlock::forgetSpell(std::string name){
    _SpellBook.forgetSpell(name);
}

void Warlock::launchSpell(std::string name, ATarget const &ref){
    ASpell *tmp = _SpellBook.createSpell(name);

   if(tmp)
        tmp->launch(ref);
}
