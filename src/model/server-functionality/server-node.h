#ifndef MODEL_SERVER_FUNCTIONALITY_SERVER_NODE_H_
#define MODEL_SERVER_FUNCTIONALITY_SERVER_NODE_H_

#include <string>

namespace model_server_functionality {
class ServerNode {
 private:
  std::string name;

 public:
  ServerNode(const std::string &name);

  std::string GetName();
};
}  // namespace model_server_functionality

#endif