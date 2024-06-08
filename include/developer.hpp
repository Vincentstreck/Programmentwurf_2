#ifndef DEVELOPER_HPP_AB12CD34EF
#define DEVELOPER_HPP_AB12CD34EF

#include <string>
#include <stdexcept>
#include <fstream>
#include <sstream>
#include <iostream>

/**
 * @class Developer
 * @brief A class representing a developer.
 * 
 * This class provides basic functionalities for a developer, including
 * handling their name, alias, and logo. It also provides a pure virtual
 * function for solving problems, which must be implemented by derived classes.
 */
class Developer {
protected:
    std::string name;   ///< The name of the developer
    std::string alias;  ///< The alias of the developer
    std::string logo;   ///< The logo of the developer

public:
    /**
     * @brief Constructs a Developer object.
     * 
     * @param name The name of the developer.
     * @param alias The alias of the developer.
     */
    Developer(const std::string& name, const std::string& alias);

    /**
     * @brief Simulates the developer drinking coffee.
     * 
     * This is a static function that can be called without an instance of the class.
     */
    static void drink_coffee();

    /**
     * @brief Loads the developer's logo from a file.
     * 
     * @param file_path The path to the file containing the logo.
     * 
     * @throw std::runtime_error if the file cannot be opened or read.
     */
    void load_logo_from_file(const std::string& file_path);

    /**
     * @brief Gets the name of the developer.
     * 
     * @return The name of the developer.
     */
    std::string get_name() const;

    /**
     * @brief Gets the alias of the developer.
     * 
     * @return The alias of the developer.
     */
    std::string get_alias() const;

    /**
     * @brief Gets the logo of the developer.
     * 
     * @return The logo of the developer.
     */
    std::string get_logo() const;

    /**
     * @brief Solves a problem.
     * 
     * This is a pure virtual function that must be implemented by derived classes.
     */
    virtual void solve_problem() const = 0;

    /**
     * @brief Overloaded output stream operator for Developer.
     * 
     * @param os The output stream.
     * @param dev The Developer object to output.
     * @return The output stream.
     */
    friend std::ostream& operator<<(std::ostream& os, const Developer& dev);
};

#endif // DEVELOPER_HPP
