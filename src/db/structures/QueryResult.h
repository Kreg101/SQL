#include "Row.h"
#include "Column.h"

#include <utility>
#include <vector>

struct QueryResult {
  QueryResult(bool successful, std::vector<Row>  rows, std::vector<Column>  columns)
      : successful(successful), rows(std::move(rows)), columns(std::move(columns)) {}
  bool successful;
  std::vector<Row> rows;
  std::vector<Column> columns;
};

