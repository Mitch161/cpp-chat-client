#include "server-node.h"

#include <string>

using namespace model_node_functionality_server;

ServerNode::ServerNode(const std::string &name, const std::string &owner) {
  this->name = name;
  this->owner = owner;
}

std::string ServerNode::GetName() { return name; }

std::string ServerNode::GetOwner() { return owner; }