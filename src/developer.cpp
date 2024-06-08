#include "developer.hpp"
#include <fstream>

/// @brief Constructor for the Developer class.
/// @param name The name of the developer.
/// @param alias The alias of the developer.
Developer::Developer(const std::string& name, const std::string& alias) : name(name), alias(alias) {}

/// @brief Simulates the developer drinking coffee by printing a message to the console.
void Developer::drink_coffee() {
    std::cout << "Ahhhh, I needed that beer!!!" << std::endl;
}

/// @brief Loads the developer's logo from a file.
/// @param file_path The path to the file containing the logo.
/// @throws std::runtime_error if the file cannot be opened.
void Developer::load_logo_from_file(const std::string &file_path) {
    std::ifstream file(file_path);
    if (!file) {
        throw std::runtime_error("Invalid file path: " + file_path);
    }

    std::ostringstream ss;
    std::string line;
    while (std::getline(file, line)) {
        ss << line << '\n';
    }
    logo = ss.str();
    file.close();
}

/// @brief Gets the name of the developer.
/// @return The name of the developer.
std::string Developer::get_name() const {
    return name;
}

/// @brief Gets the alias of the developer.
/// @return The alias of the developer.
std::string Developer::get_alias() const {
    return alias;
}

/// @brief Gets the logo of the developer.
/// @return The logo of the developer.
std::string Developer::get_logo() const {
    return logo;
}

/// @brief Overloads the << operator for the Developer class.
/// @param os The output stream.
/// @param dev The Developer object to be outputted.
/// @return The output stream with the developer's information.
std::ostream& operator<<(std::ostream& os, const Developer& dev) {
    os << "Name: " << dev.get_name() << "\nAlias: " << dev.get_alias();
    if (!dev.get_logo().empty()) {
        os << "\n" << dev.get_logo();
    }
    return os;
}
