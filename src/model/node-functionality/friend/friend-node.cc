#include "friend-node.h"

#include <string>

using namespace model_node_functionality_friend;
using namespace std;

FriendNode::FriendNode(const string& name, const string& uuid) {
  this->name = name;
  this->uuid = uuid;
}

string FriendNode::GetUuid() { return this->uuid; }

string FriendNode::GetName() { return this->name; }