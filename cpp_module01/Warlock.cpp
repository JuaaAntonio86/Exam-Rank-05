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
    for(std::map<std::string, ASpell *>::iterator it=_SpellBook.begin(); it != _SpellBook.end();it++)
    {
        delete it->second;
    }
    _SpellBook.clear();
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
    if(ref)
        _SpellBook[ref->getName()] = ref->clone();
}

void Warlock::forgetSpell(std::string name){
    std::map<std::string, ASpell *>::iterator it=_SpellBook.find(name);
    if (it != _SpellBook.end())
    {
        delete it->second;
        _SpellBook.erase(name);
    }
}

void Warlock::launchSpell(std::string name, ATarget const &ref){
   if(_SpellBook.find(name) != _SpellBook.end())
        _SpellBook[name]->launch(ref);
}
