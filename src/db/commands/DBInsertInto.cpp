#include "../MyCoolDB.h"
#include "../algorithms.cpp"

void MyCoolDB::InsertInto(InsertIntoModel& insert_into_model) {
  Table& table = FindTableByName(tables_, insert_into_model.table_name);

  table.rows.insert(
      table.rows.end(),
      std::make_move_iterator(insert_into_model.rows.begin()),
      std::make_move_iterator(insert_into_model.rows.end())
  );
}