#ifndef CPPCHATCLIENT_VIEW_GUIVIEW_H_
#define CPPCHATCLIENT_VIEW_GUIVIEW_H_

#include <gtk/gtk.h>

#include <memory>
#include <string>

#include "../model/node-functionality/friend/friend-node.h"
#include "view.h"

namespace chat_client_view {
class GuiView : public View {
 private:
  GtkBuilder *builder;
  GtkWidget *window;
  // GMainContext *context;
  int argc;
  char **argv;

 public:
  GuiView(int argc, char **argv);

  void Start();

  void Setup(int, char **);

  void Menu();

  std::string GetInputUuidToAdd();

  std::string GetInputUuidToDelete();

  void AddFriendToFriendList(
      std::shared_ptr<model_node_functionality_friend::FriendNode>);

  void RemoveFriendFromFriendList(const std::string &);

  void AddObserverAddFriendButton(chat_client_controller::Observer &);

  void AddObserverDeleteFriendButton(chat_client_controller::Observer &);
};
}  // namespace chat_client_view

#endif