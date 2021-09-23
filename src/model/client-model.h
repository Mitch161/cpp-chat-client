#ifndef CPPCHATCLIENT_MODEL_CLIENTMODEL_
#define CPPCHATCLIENT_MODEL_CLIENTMODEL_

#include <memory>
#include <string>

#include "node-functionality/friend/friend-node.h"
#include "node-functionality/node-api.h"
#include "node-functionality/node-utility.h"

using namespace model_node_functionality;
using namespace model_node_functionality_friend;

namespace chat_client_model {
class ClientModel {
 private:
  NodeAPI<FriendNode> *friend_api = new NodeUtility<FriendNode>();

 public:
  bool AddFriend(const std::string &uuid, const std::string &owner);
  bool DeleteFriend(const std::string &uuid);
  std::shared_ptr<FriendNode> GetFriend(const std::string &uuid) const;
};
}  // namespace chat_client_model

#endif