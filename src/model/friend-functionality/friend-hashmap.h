#ifndef CPPCHATCLIENT_MODEL_FRIENDFUNCTIONALITY_FRIENDHASHMAP_
#define CPPCHATCLIENT_MODEL_FRIENDFUNCTIONALITY_FRIENDHASHMAP_

#include "friend-node.h"

namespace chat_client_model_friend_functionality {
class FriendHashmap {
 private:
  FriendNode prev;

 public:
  bool AddFriend(FriendNode);
};
}  // namespace chat_client_model_friend_functionality

#endif