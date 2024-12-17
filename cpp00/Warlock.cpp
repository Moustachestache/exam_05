# include "Warlock.hpp"
# include <iostream>

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title)
{
    std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << _name << ": My job here is done!" << std::endl;
}

const std::string     &Warlock::getName() const
{
    return _name;
}

const std::string     &Warlock::getTitle() const
{
    return _title;
}

void            Warlock::setTitle(const std::string &newTitle)
{
    _title = newTitle;
}

void            Warlock::introduce() const
{
   std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

Warlock::Warlock()
{
    return;
}

Warlock::Warlock(Warlock &obj)
{
    (void) obj;
    return;
}

Warlock &Warlock::operator=(Warlock &obj)
{
    (void) obj;
    return *this;
}
