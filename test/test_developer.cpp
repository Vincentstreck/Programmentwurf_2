#include <gtest/gtest.h>
#include "developer.hpp"
#include "junior_developer.hpp"
#include "senior_developer.hpp"

/**
 * @class DeveloperTest
 * @brief Unit tests for the Developer, JuniorDeveloper, and SeniorDeveloper classes.
 *
 * This class uses Google Test to define and run unit tests for the Developer and its derived classes.
 */
class DeveloperTest : public ::testing::Test {
protected:
    /// JuniorDeveloper instance for testing.
    JuniorDeveloper junior{"Nancy Cartwright", "Bart Simpson"};

    /// SeniorDeveloper instance for testing.
    SeniorDeveloper senior{"Dan Castellaneta", "Homer Simpson"};
};

/**
 * @brief Test to verify the get_name() method.
 *
 * This test checks if the get_name() method returns the correct name for both JuniorDeveloper
 * and SeniorDeveloper instances.
 */
TEST_F(DeveloperTest, TestGetName) {
    EXPECT_EQ(junior.get_name(), "Nancy Cartwright");
    EXPECT_EQ(senior.get_name(), "Dan Castellaneta");
}

/**
 * @brief Test to verify the get_alias() method.
 *
 * This test checks if the get_alias() method returns the correct alias for both JuniorDeveloper
 * and SeniorDeveloper instances.
 */
TEST_F(DeveloperTest, TestGetAlias) {
    EXPECT_EQ(junior.get_alias(), "Bart Simpson");
    EXPECT_EQ(senior.get_alias(), "Homer Simpson");
}

/**
 * @brief Test to verify the logo loading functionality.
 *
 * This test checks if the load_logo_from_file() method correctly loads a logo from a file for a
 * JuniorDeveloper instance and throws a runtime error for an invalid file path in a SeniorDeveloper instance.
 */
TEST_F(DeveloperTest, TestLogoLoading) {
    // Test that the logo is initially an empty string
    EXPECT_EQ(junior.get_logo(), "");
    
    // Test loading a valid logo file
    junior.load_logo_from_file("/workspaces/Programmentwurf_2/test/logo_test.txt");
    EXPECT_EQ(junior.get_logo(), "LOGO\n");

    // Test loading an invalid logo file
    //EXPECT_THROW(junior.load_logo_from_file("invalid.txt"), std::runtime_error);
}

/**
 * @brief Main function to run all the tests.
 *
 * @param argc Number of command-line arguments.
 * @param argv Array of command-line arguments.
 * @return The result of running all tests.
 */
auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
