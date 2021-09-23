#ifndef MODEL_NODE_FUNCTIONALITY_SERVER_SERVER_NODE_H_
#define MODEL_NODE_FUNCTIONALITY_SERVER_SERVER_NODE_H_

#include <string>

namespace model_node_functionality_server {
class ServerNode {
 private:
  std::string name;
  std::string owner;

 public:
  ServerNode(const std::string &name, const std::string &owner);

  std::string GetName();

  std::string GetOwner();
};
}  // namespace model_node_functionality_server

#endif