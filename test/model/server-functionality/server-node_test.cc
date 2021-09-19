#include "model/server-functionality/server-node.h"

#include <gtest/gtest.h>

#include <string>

using namespace model_server_functionality;

class ServerNodeTest : public ::testing::Test {};

TEST_F(ServerNodeTest, GetNameTest) {
  ServerNode server_one;
  std::string name_one = "test server";

  EXPECT_EQ(server_one.GetName(), name_one);
}