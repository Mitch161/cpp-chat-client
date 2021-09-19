#include "server-node.h"

#include <string>

using namespace model_server_functionality;

ServerNode::ServerNode(const std::string &name) { this->name = name; }

std::string ServerNode::GetName() { return name; }