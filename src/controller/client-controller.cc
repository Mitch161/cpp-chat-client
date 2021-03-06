#include "client-controller.h"

#include <iostream>
#include <memory>
#include <string>
#include <thread>

#include "addfriend-observer.h"
#include "deletefriend-observer.h"
#include "view-factory.h"

using namespace chat_client_controller;
using namespace chat_client_model;
using namespace std;

ClientController::ClientController(int argc, char **argv) {
  model = make_shared<ClientModel>();

  ViewFactory factory;
  view = factory.CreateView(argc, argv);
}

void ClientController::Body() {
  // setup the gui
  view->register_application();

  // add observers to buttons
  AddFriendObserver add_friend_observer(model, view);
  DeleteFriendObserver delete_friend_observer(model, view);

  // enter main loop
  view->run();
}