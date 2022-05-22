#include "server-node.h"

#include <string>

using namespace model_node_functionality_server;

std::string ServerNode::GetUuid() { return uuid; }

std::string ServerNode::GetName() { return name; }

std::string ServerNode::GetOwner() { return owner; }