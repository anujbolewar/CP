// Recursive implementation of n! (n-factorial) calculation

//function (){
//base case 
// 

//recursive code 

//   }

// returnType function(e) {
//     if (condition) return value;

//     return function(smaller_params);
// }


//}

int factorial(int n) {
    // Base case: n = 0 or 1
    if (n <= 1) {
        return 1;
    }
    // Recursive case: n! = n * (n - 1)!
    return n * factorial(n - 1);
}