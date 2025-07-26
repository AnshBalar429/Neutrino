#ifndef KEY_VALUE_STORE_HPP
#define KEY_VALUE_STORE_HPP

#include <string>
#include <optional>
#include <unordered_map>

class KeyValueStore {
public:
    void put(const std::string& key, const std::string& value);

    // Retrieve value for 'key'; returns std::nullopt if not found
    std::optional<std::string> get(const std::string& key) const;

private:

    std::unordered_map<std::string, std::string> map_;
};

#endif // KEY_VALUE_STORE_HPP
