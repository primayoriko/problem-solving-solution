function main() {
    // write your code here.
    // call functions `nextString`, `nextFloat` and `nextInt`
    // to read the next token of input (ignoring whitespace)
    // Alternatively, you can create your own input parser functions
    // use console.log() to write to stdout
  
    let arr = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789".split(
      "",
    );
    let t = nextInt();
  
    while (t--) {
      const n = nextInt();
      if (n <= 3) {
        console.log("impossible");
        continue;
      }
      if(n == 5){
        console.log('XXXTr')
        console.log('XTTTr')
        console.log('XTErr')
        console.log('mmEEr')
        console.log('mmmEE')
        continue
      }
      if(n == 7){
        console.log('aaaaaaa')
        console.log('eeeeefb')
        console.log('eggghfb')
        console.log('eghhhfb')
        console.log('cghhffb')
        console.log('cgghffb')
        console.log('cccccbb')
        continue
      }
      let face = 0;
      let res = new Array(n);
      for (let i = 0; i < n; ++i) {
        res[i] = new Array(n);
      }
      let p = [0, 0];
      let char = 0;
      let counter = 0;
      while (res[p[0]][p[1]] === undefined) {
        res[p[0]][p[1]] = arr[char];
        ++counter;
        if (counter >= n) {
          counter = 0;
          ++char;
        }
        if (face === 0) {
          p[0]++;
        } else if (face === 1) {
          p[1]++;
        } else if (face === 2) {
          p[0]--;
        } else if (face === 3) {
          p[1]--;
        }
        if (
          p[0] >= n ||
          p[0] < 0 ||
          p[1] >= n ||
          p[1] < 0 ||
          res[p[0]][p[1]] !== undefined
        ) {
          if (face === 0) {
            p[0]--;
          } else if (face === 1) {
            p[1]--;
          } else if (face === 2) {
            p[0]++;
          } else if (face === 3) {
            p[1]++;
          }
          ++face;
          face %= 4;
          if (face === 0) {
            p[0]++;
          } else if (face === 1) {
            p[1]++;
          } else if (face === 2) {
            p[0]--;
          } else if (face === 3) {
            p[1]--;
          }
        }
      }
      for (let i = 0; i < n; ++i) {
        console.log(res[i].join(""));
      }
    }
  }
  
  // default parsers for JS.
  function nextInt() {
    return parseInt(nextString());
  }
  
  function nextFloat() {
    return parseFloat(nextString());
  }
  
  function nextString() {
    var next_string = "";
    clearWhitespaces();
    while (
      input_cursor < input_stdin.length &&
      !isWhitespace(input_stdin[input_cursor])
    ) {
      next_string += input_stdin[input_cursor];
      input_cursor += 1;
    }
    return next_string;
  }
  
  function nextChar() {
    clearWhitespaces();
    if (input_cursor < input_stdin.length) {
      return input_stdin[input_cursor++];
    } else {
      return "\0";
    }
  }
  
  process.stdin.resume();
  process.stdin.setEncoding("ascii");
  
  var input_stdin = "";
  var input_cursor = 0;
  process.stdin.on("data", function (data) {
    input_stdin += data;
  });
  process.stdin.on("end", function () {
    main();
  });
  
  function isWhitespace(character) {
    return " \t\n\r\v".indexOf(character) > -1;
  }
  
  function clearWhitespaces() {
    while (
      input_cursor < input_stdin.length &&
      isWhitespace(input_stdin[input_cursor])
    ) {
      // ignore the next whitespace character
      input_cursor += 1;
    }
  }
  