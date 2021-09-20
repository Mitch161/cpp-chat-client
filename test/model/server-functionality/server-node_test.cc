#include "model/server-functionality/server-node.h"

#include <gtest/gtest.h>

#include <string>

using namespace model_server_functionality;

class ServerNodeTest : public ::testing::Test {
 public:
  ServerNodeTest() {
    name_one = "test server";
    name_two = "micky server";

    owner_one = "mitch";
    owner_two = "micky";

    server_one = new ServerNode(name_one, owner_one);
    server_two = new ServerNode(name_two, owner_two);
  }

 protected:
  std::string name_one;
  std::string name_two;

  std::string owner_one;
  std::string owner_two;

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
  ServerNode tmp_server(name, owner_two);

  EXPECT_EQ(tmp_server.GetName(), name);

  name = "bob";
  EXPECT_NE(tmp_server.GetName(), name);

  name = "mitch";
  EXPECT_EQ(tmp_server.GetName(), name);
}

TEST_F(ServerNodeTest, GetNameMany) {
  ServerNode *server_array[20];

  for (int index = 0; index < 20; ++index) {
    std::string name = std::to_string(index);
    server_array[index] = new ServerNode(name, owner_one);
  }

  for (int index = 0; index < 20; ++index) {
    EXPECT_EQ(server_array[index]->GetName(), std::to_string(index));
  }
}

TEST_F(ServerNodeTest, GetNameNotEqual) {
  EXPECT_NE(server_one->GetName(), server_two->GetName());
}

TEST_F(ServerNodeTest, GetNameEqual) {
  ServerNode *tmp_server = new ServerNode(name_one, owner_one);

  EXPECT_EQ(server_one->GetName(), tmp_server->GetName());
}

TEST_F(ServerNodeTest, GetOwner) {
  std::string owner = "mitch";
  EXPECT_EQ(server_one->GetOwner(), owner);
}

TEST_F(ServerNodeTest, GetOwnerDouble) {
  EXPECT_EQ(server_one->GetOwner(), owner_one);
  EXPECT_EQ(server_two->GetOwner(), owner_two);
}

TEST_F(ServerNodeTest, GetOwnerConstant) {
  std::string owner = "mitch";
  ServerNode tmp_server(name_one, owner);

  EXPECT_EQ(tmp_server.GetOwner(), owner);

  owner = "bob";
  EXPECT_NE(tmp_server.GetOwner(), owner);

  owner = "mitch";
  EXPECT_EQ(tmp_server.GetOwner(), owner);
}

TEST_F(ServerNodeTest, GetUuidMany) {
  ServerNode *server_array[20];

  for (int index = 0; index < 20; ++index) {
    std::string owner = std::to_string(index);
    server_array[index] = new ServerNode(name_one, owner);
  }

  for (int index = 0; index < 20; ++index) {
    EXPECT_EQ(server_array[index]->GetOwner(), std::to_string(index));
  }
}