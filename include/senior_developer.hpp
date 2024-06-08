#ifndef SENIOR_DEVELOPER_HPP_XYZ987ABCD
#define SENIOR_DEVELOPER_HPP_XYZ987ABCD

#include "developer.hpp"

/**
 * @class SeniorDeveloper
 * @brief A class representing a senior developer.
 *
 * The SeniorDeveloper class inherits from the Developer class and represents a developer
 * at a senior level with advanced problem-solving capabilities.
 */
class SeniorDeveloper : public Developer {
public:
    /**
     * @brief Constructs a new SeniorDeveloper object.
     *
     * @param name The name of the senior developer.
     * @param alias The alias or nickname of the senior developer.
     */
    SeniorDeveloper(const std::string& name, const std::string& alias);

    /**
     * @brief Solves a problem in a manner specific to a senior developer.
     *
     * This function overrides the solve_problem method in the Developer class to provide
     * an advanced implementation of problem-solving as done by a senior developer.
     */
    void solve_problem() const override;
};

#endif // SENIOR_DEVELOPER_HPP