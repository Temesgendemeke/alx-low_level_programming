#!/usr/bin/node
function add (a, b) {
  const first = parseInt(a);
  const second = parseInt(b);
  if (isNaN(first) || isNaN(second)) console.log('NaN');
  else if (first > 0) {
    console.log(first + second);
  }
}

add(process.argv[2], process.argv[3]);
