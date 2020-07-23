// Two-fer or 2-fer is short for two for one. One for you and one for me.
// "One for X, one for me.", when X is a name or "you".
// If the given name is "Alice", the result should be "One for Alice, one for me." 
// If no name is given, the result should be "One for you, one for me."

export const twoFer = (name) => {
  if (name) {
    return (`One for ${name}, one for me.`);
  }
  return ('One for you, one for me.');
};