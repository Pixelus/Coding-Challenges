// You are given a two-digit integer n. Return the sum of its digits.

function addTwoDigits(n) {
    var sum;
	var firstDigit = n/10;
	var secondDigit = n % 10;
    sum = firstDigit + secondDigit;
	return(Math.floor(sum));	
}
