#include "junior_developer.hpp"

/**
 * @brief Constructor for JuniorDeveloper.
 * 
 * @param name The name of the junior developer.
 * @param alias The alias of the junior developer.
 */
JuniorDeveloper::JuniorDeveloper(const std::string& name, const std::string& alias) 
    : Developer(name, alias) {}

/**
 * @brief Solves a problem and outputs the process.
 * 
 * This function prints a message. 
 * It calls the drink_coffee() function.
 */
void JuniorDeveloper::solve_problem() const {
    std::cout << "Solving a problem:\n" << *this << "\nPuh, that was tough" << std::endl;
    drink_coffee();
}
