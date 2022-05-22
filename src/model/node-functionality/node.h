#ifndef MODEL_NODE_FUNCTIONALITY_NODE_H_
#define MODEL_NODE_FUNCTIONALITY_NODE_H_

#include <string>

namespace model_node_functionality {

class Node {
 protected:
  std::string uuid;
  std::string name;

 public:
  Node(const std::string &uuid, const std::string &name) {
      this->uuid = uuid;
      this->name = name;
  }

  virtual std::string GetUuid() = 0;
  virtual std::string GetName() = 0;
};
}  // namespace model_node_functionality

#endif