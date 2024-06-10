function showMe(yourID) {
  const firstLetterUppercase = /^[A-Z]/.test(yourID);
  const regex = /^[A-Z][a-z]+(-[A-Z][a-z]+)+$/.test(yourID);
  const checkWords = yourID.split(/[\s-]+/);
  const otherLettersLowercase =
    yourID.substr(1) === yourID.substr(1).toLowerCase();
  const includeSpace = yourID.includes(" ");

  return (
    (firstLetterUppercase &&
      otherLettersLowercase &&
      checkWords.length == 1 &&
      yourID.length > 1) ||
    (regex && !includeSpace)
  );
}
