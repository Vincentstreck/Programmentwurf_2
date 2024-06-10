#include <gtest/gtest.h>
#include "developer.hpp"
#include "junior_developer.hpp"
#include "senior_developer.hpp"



TEST_F(DeveloperTest, TestGetName) {
    EXPECT_EQ(junior.get_name(), "Nancy Cartwright");
    EXPECT_EQ(senior.get_name(), "Dan Castellaneta");
}

TEST_F(DeveloperTest, TestGetAlias) {
    EXPECT_EQ(junior.get_alias(), "Bart Simpson");
    EXPECT_EQ(senior.get_alias(), "Homer Simpson");
}

TEST_F(DeveloperTest, TestLogoLoading) {
    junior.load_logo_from_file("../logo/logo.txt");
    EXPECT_EQ(junior.get_logo(), "Expected Logo Content");
