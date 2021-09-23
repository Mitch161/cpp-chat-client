#ifndef MODEL_NODE_FUNCTIONALITY_NODE_HASHMAP_H_
#define MODEL_NODE_FUNCTIONALITY_NODE_HASHMAP_H_

#include <map>
#include <memory>
#include <string>

#include "node-list.h"

namespace model_node_functionality {

template <typename T>
class NodeHashmap : public NodeList<T> {
 private:
  std::map<const std::string, std::shared_ptr<T>> node_map_;

 public:
  bool AddNode(const std::string &uuid, T &node);

  bool DeleteNode(const std::string &uuid);

  std::shared_ptr<T> GetNode(const std::string &uuid) const;
};
}  // namespace model_node_functionality

#endif