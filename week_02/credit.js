let alfabeto= ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
        'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
        't', 'u', 'v', 'w', 'x', 'y', 'z'];

let pontos = [1, 3, 3, 2, 1, 4, 2, 4,
        1, 8, 5, 1, 3, 1, 1, 3, 10, 1,
        1, 1, 1, 4, 4, 8, 4, 10] ;
let user1 = "COMPUTER".toLowerCase();
let user2 = "Red".toLowerCase();

// Calling the functions
winner(user1, user2);

function winner(user1, user2){
    let contador1 = 0;
    let contador2 = 0;

    for(let index = 0; index < alfabeto.length; index++){
        if(user1[index] === alfabeto[index]){
            contador1 += pontos[index];
        } 
        if(user2[index] === alfabeto[index]){
            contador2 += pontos[index];
        }
    }

    console.log(`${contador1} , ${contador2}`);

    if(contador1 > contador2){
        console.log("Player 1 wins!");
    }else if(contador2 > contador1){
        console.log("Player 2 wins!");
    }else{
        console.log("It's a tie!");
    }
}
