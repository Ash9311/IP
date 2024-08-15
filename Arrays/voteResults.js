let vote = [1, 1, 3, 4, 3, 3];
let age = [7, 18, 53, 43, 23, 65];
let voteResults = {};

for (let i = 0; i < vote.length; i++) {
if(age[i]>18){
   voteResults[vote[i]] = (voteResults[vote[i]] || 0) + 1;
}
}

console.log(voteResults); 
