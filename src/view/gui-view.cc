#include "gui-view.h"

#include <iostream>

using namespace chat_client_view;
using namespace std;
using namespace chat_client_model_friend_functionality;
using namespace chat_client_controller;

void AddFriend(GtkButton *, gpointer);

GuiView::GuiView(int argc, char **argv) {
  this->argc = argc;
  this->argv = argv;
}

void GuiView::Setup(int argc, char **argv) {
  gtk_init(&argc, &argv);

  builder = gtk_builder_new();
  gtk_builder_add_from_file(builder, "resources/mickyb18-chat-client.glade",
                            NULL);

  window = GTK_WIDGET(gtk_builder_get_object(builder, "main_window"));
  gtk_builder_connect_signals(builder, NULL);

  // MIGHT BREAK EVERYTHING MICKY
  // g_object_unref(builder);
}

void GuiView::Menu() {}

string GuiView::GetInputUuidToAdd() { return "filler text"; }

void GuiView::AddFriendToFriendList(shared_ptr<FriendNode> friend_node) {
  cout << "added" << endl;
}

void GuiView::AddObserverAddFriendButton(Observer &observer) {
  GtkWidget *add_friend_button =
      GTK_WIDGET(gtk_builder_get_object(builder, "add_friend_button"));

  g_signal_connect(G_OBJECT(add_friend_button), "clicked",
                   G_CALLBACK(AddFriend), &observer);
}

void GuiView::InternalThreadEntry() {
  gtk_widget_show(window);
  gtk_main();

  pthread_exit(NULL);
}

void AddFriend(GtkButton *button, gpointer data) {
  Observer *observer = static_cast<Observer *>(data);
  observer->Execute();
}

extern "C" {
void on_main_window_destroy() { gtk_main_quit(); }
}