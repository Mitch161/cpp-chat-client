#ifndef MODEL_NODE_FUNCTIONALITY_NODE_LIST_H_
#define MODEL_NODE_FUNCTIONALITY_NODE_LIST_H_

#include <memory>
#include <string>

namespace model_node_functionality {

template <typename T>
class NodeList {
 public:
  virtual bool AddNode(const std::string &uuid, T &node) = 0;
  virtual bool DeleteNode(const std::string &uuid) = 0;
  virtual std::shared_ptr<T> GetNode(const std::string &uuid) const = 0;
};

}  // namespace model_node_functionality

#endif