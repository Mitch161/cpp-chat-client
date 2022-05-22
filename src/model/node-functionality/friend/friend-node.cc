#include "friend-node.h"

#include <string>

using namespace model_node_functionality_friend;
using namespace std;

string FriendNode::GetUuid() { return this->uuid; }

string FriendNode::GetName() { return this->name; }