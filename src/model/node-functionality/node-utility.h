#ifndef MODEL_NODE_FUNCTIONALITY_NODE_UTILITY_H_
#define MODEL_NODE_FUNCTIONALITY_NODE_UTILITY_H_

#include <memory>
#include <string>

#include "node-api.h"

namespace model_node_functionality {

template <typename T>
class NodeUtility : public NodeAPI<T> {
 public:
  bool AddNode(const std::string &uuid, const std::string &owner);
  bool DeleteNode(const std::string &uuid);
  std::shared_ptr<T> GetNode(const std::string &uuid) const;
};
}  // namespace model_node_functionality

#endif