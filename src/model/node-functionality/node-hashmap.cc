#include "node-hashmap.h"

#include <memory>
#include <string>

using namespace model_node_functionality;
using namespace std;

template <typename T>
bool NodeHashmap<T>::AddNode(const std::string& uuid, T& node) {
  shared_ptr<T> node_ptr = make_shared<T>(node);

  auto ret =
      node_map_.insert(pair<const string, shared_ptr<T>>(uuid, node_ptr));

  return ret.second;
}

template <typename T>
bool NodeHashmap<T>::DeleteNode(const string& uuid) {
  return node_map_.erase(uuid);
}

template <typename T>
shared_ptr<T> NodeHashmap<T>::GetNode(const string& uuid) const {
  return node_map_.at(uuid);
}