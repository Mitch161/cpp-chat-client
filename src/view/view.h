#ifndef CPPCHATCLIENT_VIEW_VIEW_H_
#define CPPCHATCLIENT_VIEW_VIEW_H_

#include <memory>
#include <string>

#include "../controller/observer.h"
#include "../model/node-functionality/friend/friend-node.h"

namespace chat_client_view {

class View {
 public:
  virtual void Start() = 0;
  virtual void Menu() = 0;

  virtual std::string GetInputUuidToAdd() = 0;
  virtual std::string GetInputUuidToDelete() = 0;

  virtual void AddFriendToFriendList(
      std::shared_ptr<model_node_functionality_friend::FriendNode>) = 0;
  virtual void RemoveFriendFromFriendList(const std::string&) = 0;

  virtual void AddObserverAddFriendButton(
      chat_client_controller::Observer&) = 0;
  virtual void AddObserverDeleteFriendButton(
      chat_client_controller::Observer&) = 0;
};
}  // namespace chat_client_view

#endif