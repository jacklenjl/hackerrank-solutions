function test(s)
{
try{
let y=s.split('');
for(let i=s.length-1;i>=0;i--)
console.log(y[i])

}catch(err)
{
    console.log(err)
    
}
finally{
 console.log(s)       
}
}

test('number(1234)')