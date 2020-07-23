// Given a year, report if it is a leap year.

export const isLeap = (year) => {
  // On every year that is evenly divisible by 4
  // Except every year that is evenly divisible by 100
  // Unless the year is also evenly divisible by 400
  if (((year % 4 === 0) && (year % 100 !== 0)) || (year % 400 === 0)) {
    return true;
  } 
  return false;
};
