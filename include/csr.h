#include "types.h"

/// 'Compressed Sparse Row' representation of sparse matrix
typedef struct matrix_csr {
  /// Number of rows
  usize m;
  /// Number of columns
  usize n;
  /// Number of non-zero elements
  usize nz;
  /// Top level column pointers
  usize *r;
  /// Secondary row indices
  usize *c;
  /// Actual values
  u32 *v;
} csr;

csr *csr_new(usize m, usize n, usize nz);

void csr_free(csr *mat);
