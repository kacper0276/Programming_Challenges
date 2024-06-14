function findMissing(arr1, arr2) {
  const count = (arr) =>
    arr.reduce((acc, num) => ((acc[num] = (acc[num] || 0) + 1), acc), {});

  const arr1Count = count(arr1);
  const arr2Count = count(arr2);

  return arr1.find((num) => arr1Count[num] !== arr2Count[num]);
}

console.log(findMissing([4, 3, 3, 61, 8, 8], [8, 61, 8, 3, 4]));
