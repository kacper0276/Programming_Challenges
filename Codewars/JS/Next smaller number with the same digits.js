function nextSmaller(n) {
  const digits = n.toString().split("").map(Number);
  const len = digits.length;

  for (let i = len - 2; i >= 0; i--) {
    if (digits[i] > digits[i + 1]) {
      let maxIndex = i + 1;
      for (let j = i + 1; j < len; j++) {
        if (digits[j] < digits[i] && digits[j] >= digits[maxIndex]) {
          maxIndex = j;
        }
      }

      [digits[i], digits[maxIndex]] = [digits[maxIndex], digits[i]];

      const rightPart = digits.slice(i + 1).sort((a, b) => b - a);
      const result = digits
        .slice(0, i + 1)
        .concat(rightPart)
        .join("");

      if (result[0] === "0") return -1;

      return parseInt(result, 10);
    }
  }

  return -1;
}

console.log(nextSmaller(21)); // 12
console.log(nextSmaller(531)); // 513
console.log(nextSmaller(2071)); // 2017
console.log(nextSmaller(9)); // -1
console.log(nextSmaller(111)); // -1
console.log(nextSmaller(135)); // -1
console.log(nextSmaller(1027)); // -1
