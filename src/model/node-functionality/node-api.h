#ifndef MODEL_NODE_FUNCTIONALITY_NODE_API_H_
#define MODEL_NODE_FUNCTIONALITY_NODE_API_H_

#include <memory>
#include <string>

#include "node-hashmap.h"
#include "node-list.h"

namespace model_node_functionality {

template <typename T>
class NodeAPI {
 public:
  NodeAPI() { node_list_ = std::make_unique<NodeHashmap<T>>(); };

  virtual bool AddNode(const std::string &uuid, const std::string &owner) = 0;
  virtual bool DeleteNode(const std::string &uuid) = 0;
  virtual std::shared_ptr<T> GetNode(const std::string &uuid) const = 0;

 protected:
  std::unique_ptr<NodeList<T>> node_list_;
};
}  // namespace model_node_functionality

#endif