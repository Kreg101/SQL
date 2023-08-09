#include "../MyCoolDB.h"

void MyCoolDB::DropTable(const std::string& table_name) {
  bool deleted = std::erase_if(tables_, [&table_name](Table& table) {
    return table.name == table_name;
  });

  if (!deleted) {
    throw SQLError(TABLE_NOT_FOUND);
  }
}