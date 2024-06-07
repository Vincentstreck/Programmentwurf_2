#ifndef JUNIOR_DEVELOPER_HPP_ABC123XYZZ
#define JUNIOR_DEVELOPER_HPP_ABC123XYZZ

#include "developer.hpp"

/**
 * @class JuniorDeveloper
 * @brief A class representing a junior developer.
 *
 * The JuniorDeveloper class inherits from the Developer class and represents a developer
 * at a junior level with basic problem-solving capabilities.
 */
class JuniorDeveloper : public Developer {
public:
    /**
     * @brief Constructs a new JuniorDeveloper object.
     *
     * @param name The name of the junior developer.
     * @param alias The alias or nickname of the junior developer.
     */
    JuniorDeveloper(const std::string& name, const std::string& alias);

    /**
     * @brief Solves a problem in a manner specific to a junior developer.
     *
     * This function overrides the solve_problem method in the Developer class to provide
     * a basic implementation of problem-solving as done by a junior developer.
     */
    void solve_problem() const override;
};

#endif // JUNIOR_DEVELOPER_HPP