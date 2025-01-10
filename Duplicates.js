const arr = [5, 4, 3, 2, 1, 7, 4, 2, 6];
const dupli = [];
for (let i = 0; i < arr.length; i++) {
  dupli[arr[i]] = 0;
}
for (let j = 0; j < arr.length; j++) {
  dupli[arr[j]]++;
}
for (let k = 0; k < arr.length; k++) {
  if (dupli[k] > 1) {
    console.log(k);
  }
}
