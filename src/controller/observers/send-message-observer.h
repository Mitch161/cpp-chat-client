#ifndef CONTROLLER_OBSERVERS_SEND_MESSAGE_OBSERVER_H_
#define CONTROLLER_OBSERVERS_SEND_MESSAGE_OBSERVER_H_

#include "../../model/client-model.h"
#include "../../view/MainApplication.h"
#include "observer.h"

namespace controller_observers {

class SendMessageObserver : public Observer {
 private:
  std::shared_ptr<model::ClientModel> model;

 public:
  SendMessageObserver(std::shared_ptr<model::ClientModel>,
                      Glib::RefPtr<MainApplication>);

  void Execute();
};

}  // namespace controller_observers

#endif