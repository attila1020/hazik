let num = BigInt(2) ** BigInt(1024);
console.log(`Number: ${num}`);

let digits = [];
while (num !== 0n) {
  digits.unshift(num % 10n);
  num /= 10n;
}
console.log(`Digits in ${num} are: ${digits.join(', ')}`);

