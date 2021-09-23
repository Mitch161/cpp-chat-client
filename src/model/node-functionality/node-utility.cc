#include "node-utility.h"

#include <memory>
#include <string>

using namespace model_node_functionality;
using namespace std;

template <typename T>
bool NodeUtility<T>::AddNode(const string& uuid, const std::string& owner) {
  T node(uuid, owner);
  return this->node_list_->AddNode(uuid, node);
}

template <typename T>
bool NodeUtility<T>::DeleteNode(const string& uuid) {
  return this->node_list_->DeleteNode(uuid);
}

template <typename T>
shared_ptr<T> NodeUtility<T>::GetNode(const string& uuid) const {
  return this->node_list_->GetNode(uuid);
}