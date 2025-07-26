#include "KeyValueStore.hpp"

void KeyValueStore::put(const std::string& key, const std::string& value) {
    map_[key] = value;
}

std::optional<std::string> KeyValueStore::get(const std::string& key) const {
    auto it = map_.find(key);
    if (it != map_.end()) {
        return it->second;
    }
    return std::nullopt;
}
