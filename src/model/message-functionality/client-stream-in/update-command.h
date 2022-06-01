#ifndef MODEL_MESSAGE_FUNCTIONALITY_CLIENT_STREAM_IN_UPDATE_COMMAND_H_
#define MODEL_MESSAGE_FUNCTIONALITY_CLIENT_STREAM_IN_UPDATE_COMMAND_H_

#include "../message.h"

namespace model_message_functionality_client_stream_in {
class UpdateCommand : public model_message_functionality::Message {
 public:
  std::string ToString();

  nlohmann::json ToJson();
};
}  // namespace model_message_functionality_client_stream_in

#endif