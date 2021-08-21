#ifndef MODEL_MESSAGEFUNCTIONALITY_GENERAL_INVALIDCOMMAND_
#define MODEL_MESSAGEFUNCTIONALITY_GENERAL_INVALIDCOMMAND_

#include "../message.h"

namespace chat_client_model_message_functionality_general {
class InvalidCommand : public chat_client_model_message_functionality::Message {
 public:
  std::string ToString();

  nlohmann::json ToJson();
};

}  // namespace chat_client_model_message_functionality_general

#endif