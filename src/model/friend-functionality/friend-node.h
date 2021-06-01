#ifndef CPPCHATCLIENT_MODEL_FRIENDFUNCTIONALITY_FRIENDNODE_
#define CPPCHATCLIENT_MODEL_FRIENDFUNCTIONALITY_FRIENDNODE_

#include <string>

namespace chat_client_model_friend_functionality {
class FriendNode {
 private:
  std::string name;

 public:
  FriendNode(std::string*);

  std::string GetName();
};
}  // namespace chat_client_model_friend_functionality

#endif