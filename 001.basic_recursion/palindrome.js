const palindrome = (str) => {
    if(str.length === 0) return true;
    if(str.length === 1) return true;
    if(str.length === 2) return str[0] === str[1];
    if(str[0] != str[str.length - 1]) return false
    return palindrome(str.substring(1, str.length - 1));
}


words = ["racecar", "level", "hello", "bike", "mom"]
for(word of words){
  console.log(word)
  console.log(palindrome(word))
  console.log("-----")
}

