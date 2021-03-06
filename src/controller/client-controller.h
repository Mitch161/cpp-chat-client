#ifndef CPPCHATCLIENT_CONTROLLER_CLIENTCONTROLLER_H_
#define CPPCHATCLIENT_CONTROLLER_CLIENTCONTROLLER_H_

#include "../model/client-model.h"
#include "../view/MainApplication.h"

namespace chat_client_controller {
class ClientController {
 private:
  std::shared_ptr<chat_client_model::ClientModel> model;
  Glib::RefPtr<MainApplication> view;

 public:
  ClientController(int, char **);

  void Body();
};
}  // namespace chat_client_controller

#endif