// Copyright 2021 Your Name <your_email>

#include <gtest/gtest.h>

#include <stdexcept>
#include <suggestion.hpp>

TEST(Example, EmptyTest) {
    EXPECT_THROW(example(), std::runtime_error);
}
