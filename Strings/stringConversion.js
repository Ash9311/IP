let str = "ash_mulky_nitte";
let str2 = "ashMulkyNitte"

//basically convert str to str2 and vice versa

function solve1(str){
    for(let i=0;i<str.length;i++){
        if(str[i]=='_'){
            str = str.slice(0,i) + str[i+1].toUpperCase() + str.slice(i+2);
        }
    }
    return str;
}

function solve2(str){
    str=str.split('')
    for(let i=0;i<str.length;i++){
        if(str[i]==str[i].toUpperCase()){
            str.splice(i,0,'_');
            str[i+1]=str[i+1].toUpperCase();
            i++;
        }
    }
    return str.join('');
}

console.log(solve2(str2));
