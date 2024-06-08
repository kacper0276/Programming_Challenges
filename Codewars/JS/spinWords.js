function spinWords(string) {
  const words = string.split(" ");
  let result = "";

  words.forEach((word, index) => {
    if (word.length >= 5) {
      var springSplit = word.split("");
      var reverse = springSplit.reverse();
      var rev = reverse.join("");
      index + 1 === words.length ? (result += `${rev}`) : (result += `${rev} `);
    } else {
      index + 1 === words.length
        ? (result += `${word}`)
        : (result += `${word} `);
    }
  });

  return result;
}

console.log(spinWords("Hey fellow warriors"));
