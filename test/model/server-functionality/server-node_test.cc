#include "model/server-functionality/server-node.h"

#include <gtest/gtest.h>

#include <string>

using namespace model_server_functionality;

class ServerNodeTest : public ::testing::Test {
 public:
  ServerNodeTest() {
    name_one = "test server";
    name_two = "micky server";

    server_one = new ServerNode(name_one);
    server_two = new ServerNode(name_two);
  }

 protected:
  std::string name_one;
  std::string name_two;

  ServerNode *server_one;
  ServerNode *server_two;
};

TEST_F(ServerNodeTest, GetNameTest) {
  EXPECT_EQ(server_one->GetName(), name_one);
}

TEST_F(ServerNodeTest, GetNameDoubleTest) {
  EXPECT_EQ(server_one->GetName(), name_one);
  EXPECT_EQ(server_two->GetName(), name_two);
}

TEST_F(ServerNodeTest, GetNameConstant) {
  std::string name = "mitch";
  ServerNode tmp_server(name);

  EXPECT_EQ(tmp_server.GetName(), name);

  name = "bob";
  EXPECT_NE(tmp_server.GetName(), name);

  name = "mitch";
  EXPECT_EQ(tmp_server.GetName(), name);
}