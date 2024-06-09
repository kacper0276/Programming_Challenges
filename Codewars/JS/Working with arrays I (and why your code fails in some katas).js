function withoutLast(arr) {
  let result = [];

  for (let i = 0; i < arr.length; i++) {
    if (i != arr.length - 1) {
      result.push(arr[i]);
    }
  }

  return result;
}

console.log(withoutLast([1, 4, 2, 3, 4]));
