int sumOfCube(int n, int sum) {
  if (n <= 0) {
    return sum;
  }
  return sumOfCube(n-1, n*n*n + sum);
}

