const fizzbuzz = (startNum, endNum) => {
  if(startNum === endNum + 1) return
  if(startNum % 3 === 0 && endNum % 5 === 0){
    console.log(`Fizzbuzz ${startNum}`)
  } else if (startNum % 3 === 0){
    console.log(`Fizz ${startNum}`)
  } else if (startNum % 5 === 0){
    console.log(`Buzz ${startNum}`)
  }
  fizzbuzz(startNum+1, endNum)
}


fizzbuzz(1,10)
