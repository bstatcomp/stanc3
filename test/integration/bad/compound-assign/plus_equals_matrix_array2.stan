generated quantities {
  matrix[2,2] x[3] = {[[1, 2], [3, 4]], [[1, 2], [3, 4]], [[1, 2], [3, 4]]};
  matrix[2,2] y[3] = {[[4, 5], [6, 7]], [[4, 5], [6, 7]], [[4, 5], [6, 7]]};
  x[3] += y[3];
  x[3,1] += y[3,1];
  x[3,1,1] += y[3,1,1];
  x[3] += y[3,1];
}