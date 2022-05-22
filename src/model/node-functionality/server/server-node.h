#ifndef MODEL_NODE_FUNCTIONALITY_SERVER_SERVER_NODE_H_
#define MODEL_NODE_FUNCTIONALITY_SERVER_SERVER_NODE_H_

#include <string>

#include "../node.h"

namespace model_node_functionality_server {
class ServerNode : public model_node_functionality::Node {
 private:
  std::string owner;

 public:
  ServerNode(const std::string &uuid, const std::string &name, const std::string &owner) : model_node_functionality::Node(uuid, name) {
    this->owner = owner;
  }

  std::string GetUuid();

  std::string GetName();

  std::string GetOwner();
};
}  // namespace model_node_functionality_server

#endif