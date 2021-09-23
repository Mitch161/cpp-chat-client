#include "client-model.h"

using namespace chat_client_model;
using namespace std;

bool ClientModel::AddFriend(const std::string& uuid, const std::string& owner) {
  return friend_api->AddNode(uuid, owner);
}

bool ClientModel::DeleteFriend(const std::string& uuid) {
  return friend_api->DeleteNode(uuid);
}

shared_ptr<FriendNode> ClientModel::GetFriend(const string& uuid) const {
  return friend_api->GetNode(uuid);
}
