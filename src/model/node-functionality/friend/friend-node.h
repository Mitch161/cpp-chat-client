#ifndef MODEL_NODE_FUNCTIONALITY_FRIEND_FRIEND_NODE_H_
#define MODEL_NODE_FUNCTIONALITY_FRIEND_FRIEND_NODE_H_

#include <string>
#include "../node.h"

namespace model_node_functionality_friend {
class FriendNode : public model_node_functionality::Node {
 public:
  FriendNode(const std::string &uuid, const std::string &name) : model_node_functionality::Node(uuid, name) {}

  std::string GetUuid();

  std::string GetName();
};
}  // namespace model_node_functionality_friend

#endif