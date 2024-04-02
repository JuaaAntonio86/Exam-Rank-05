#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

TargetGenerator::~TargetGenerator(){


}

void TargetGenerator::learnTargetType(ATarget *ref){
    if(ref)
        _TargetGenerator[ref->getType()] = ref;
}

void TargetGenerator::forgetTargetType(std::string const & name){
    std::map<std::string, ATarget *>::iterator it=_TargetGenerator.find(name);
    if (it != _TargetGenerator.end())
       _TargetGenerator.erase(name);

}

ATarget * TargetGenerator::createTarget(std::string const & name){
   ATarget * tmp = NULL;
   if(_TargetGenerator.find(name) != _TargetGenerator.end())
        tmp = _TargetGenerator[name];
    return tmp;
}
