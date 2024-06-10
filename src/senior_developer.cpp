#include "senior_developer.hpp"

/**
 * @class SeniorDeveloper
 * @brief Senior developer with problem-solving capabilities.
 */

/**
 * @brief Constructs a SeniorDeveloper.
 * 
 * @param name Developer's name.
 * @param alias Developer's alias.
 */
SeniorDeveloper::SeniorDeveloper(const std::string& name, const std::string& alias) 
    : Developer(name, alias) {}

/**
 * @brief Solves a problem and prints a message.
 *  It calls the drink_coffee() function.
 */
void SeniorDeveloper::solve_problem() const {
    std::cout << "Solving a problem:\n" << *this << "\nHa, that was EZ!" << std::endl;
    drink_coffee();
}