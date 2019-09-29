function vowelsAndConsonants(s) {
    let a=['a','e','i','o','u']
    let k=[];
  for(let j=0;j<s.length;j++)
    {
        let flag=0;
        for(let i=0;i<a.length;i++)
        {  if(s.charAt(j)==a[i])
            {console.log(s.charAt(j)) 
             flag=1;    
            }
        } 
        if(flag==0)
            k.push(s.charAt(j))
    }

    for(let i=0;i<k.length;i++)
    {console.log(k[i])}

}

vowelsAndConsonants('java')