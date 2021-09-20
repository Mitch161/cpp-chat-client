#ifndef MODEL_SERVER_FUNCTIONALITY_SERVER_NODE_H_
#define MODEL_SERVER_FUNCTIONALITY_SERVER_NODE_H_

#include <string>

namespace model_server_functionality {
class ServerNode {
 private:
  std::string name;
  std::string owner;

 public:
  ServerNode(const std::string &name, const std::string &owner);

  std::string GetName();

  std::string GetOwner();
};
}  // namespace model_server_functionality

#endif