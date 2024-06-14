function evenNumbers(array, number) {
  let arr = [];
  for (let i = array.length - 1; number > 0; i--) {
    if (array[i] % 2 == 0) {
      arr.push(array[i]);
      number--;
    }
  }
  return arr.reverse();
}
