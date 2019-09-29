function isPositive(a) {
    try{
        if(a>0)
        console.log('YES')
        else if(a==0)
        throw('Zero Error')
        else
        throw('Negative Error')

    }
    catch(err)
    {console.log(err)}
}
isPositive(0)