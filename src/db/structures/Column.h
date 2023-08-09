#include <string>
#include <utility>
#include <vector>
#include "../../structures/Attributes.h"
#include "../../structures/DataTypes.h"

class Column {
 public:
  Column(): type(Int) {};
  explicit Column(std::string name, std::vector<Attributes>  attributes, DataTypes type)
      : name(std::move(name)), attributes(std::move(attributes)), type(type) {

  };
  bool operator==(const Column& rhs) const {
    return name == rhs.name &&
        attributes == rhs.attributes &&
        type == rhs.type;
  }
  bool operator!=(const Column& rhs) const {
    return !(rhs == *this);
  }

  std::string name;
  std::vector<Attributes> attributes;
  DataTypes type;
};

