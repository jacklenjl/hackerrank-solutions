function test(){let str = "alla";


let re = /^([aeiou]).+\1$/;
//.log( result[0] ); // JavaScript
let result = str.match(re);
console.log( result ); // 1
}

test()