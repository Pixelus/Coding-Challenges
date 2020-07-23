function processData(input) {
    //Enter your code here
    var data = input.split('\n');
    var mealCost = parseFloat(data[0]);
    var tipPercent = parseFloat(data[1]);
    var taxPercent = parseFloat(data[2]);
    var tip = mealCost * (tipPercent/100);
    var tax = mealCost * (taxPercent/100);
    var totalCost = Math.round(mealCost + tip + tax);

    console.log("The total meal cost is " + totalCost + " dollars.");
}

process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

process.stdin.on("end", function () {
   processData(_input);
});
