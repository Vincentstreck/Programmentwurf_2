#include "junior_developer.hpp"
#include "senior_developer.hpp"
#include <iostream>

/**
 * @brief Main function to demonstrate the functionality of Junior and Senior Developers.
 * 
 * @return int Returns 0 on successful execution, 1 if there is an error.
 */
int main() {
    JuniorDeveloper junior("Nancy Cartwright", "Bart Simpson"); ///< Create a JuniorDeveloper object.
    SeniorDeveloper senior("Dan Castellaneta", "Homer Simpson"); ///< Create a SeniorDeveloper object.

    try {
        junior.load_logo_from_file("../logo/junior_logo.txt"); ///< Load logo for junior developer.
        senior.load_logo_from_file("../logo/senior_logo.txt"); ///< Load logo for senior developer.
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl; ///< Print error message if file loading fails.
        return 1;
    }

    junior.solve_problem(); ///< Junior developer solves a problem.
    senior.solve_problem(); ///< Senior developer solves a problem.

    return 0;
}
