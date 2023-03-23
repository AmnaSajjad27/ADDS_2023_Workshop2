int sumOfCube(int n) {
  if (n <= 0) {
    return 0;
  }
  return (n*n*n) + sumOfCube(n-1);
}