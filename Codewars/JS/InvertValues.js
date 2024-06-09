function invert(array) {
  const response = array.map((el) => (el != 0 ? -el : 0));

  return response;
}

const res = invert([1, -5, 0, 15, 11, -5]);

console.log(res);
