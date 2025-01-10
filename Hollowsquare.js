let row = 5;
for (let i = 1; i <= row; i++) {
  let str = "";
  for (let j = 1; j <= row; j++) {
    if (i == 1 || i == row || j == 1 || j == row) {
      str += " *";
    } else {
      str += "  ";
    }
  }
  console.log(str);
}
