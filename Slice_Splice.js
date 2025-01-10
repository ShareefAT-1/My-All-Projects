const half = [1, 2, 3, 5, 6, 4, 3];

// Immutable

const SlicedArray=half.slice(1,4);  //Example Of Slice Array; Syntax(Start,End);
console.log(slicedArray);

// Mutable

const Splicedarray = half.splice(0, 3, 0, 9, 8, 7); //Example Of Spliced Array; Syntax(Start,Number Of Elements,arg...);
console.log(Splicedarray,half);
// console.log(half);
