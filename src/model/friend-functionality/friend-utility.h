#ifndef CPPCHATCLIENT_MODEL_FRIENDFUNCTIONALITY_FRIENDUTILITY_
#define CPPCHATCLIENT_MODEL_FRIENDFUNCTIONALITY_FRIENDUTILITY_

#include "friend-node.h"
namespace chat_client_model_friend_functionality {
class FriendUtility {
 private:
  FriendNode prev[2];
  int pos = 0;

 public:
  bool AddFriend(FriendNode&);
};
}  // namespace chat_client_model_friend_functionality

#endif