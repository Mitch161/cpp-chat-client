#ifndef MODEL_NODE_FUNCTIONALITY_FRIEND_FRIEND_NODE_H_
#define MODEL_NODE_FUNCTIONALITY_FRIEND_FRIEND_NODE_H_

#include <string>

namespace model_node_functionality_friend {
class FriendNode {
 private:
  std::string uuid;
  std::string name;

 public:
  FriendNode(){};
  FriendNode(const std::string&, const std::string&);

  std::string GetUuid();

  std::string GetName();
};
}  // namespace model_node_functionality_friend

#endif