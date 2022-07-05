const func = (arr) => {
  arr.push(5); // By default passes by ref
  const newArr = [...arr]; // Create a new array so the main arr doesn't get modified
  return newArr;
};

const myArr = [1, 2, 3, 4];

console.log(myArr);
console.log(func(myArr));
