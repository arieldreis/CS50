let alfabeto= ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
        'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
        't', 'u', 'v', 'w', 'x', 'y', 'z'];

let pontos = [1, 3, 3, 2, 1, 4, 2, 4,
        1, 8, 5, 1, 3, 1, 1, 3, 10, 1,
        1, 1, 1, 4, 4, 8, 4, 10];

const winner = (user1, user2) => {
    let contador1 = 0;
    let contador2 = 0;

    for(let index = 0; index < user1.length; index++){
        let indexLetra1 = user1[index];
        let contadorLetra1 = alfabeto.indexOf(indexLetra1); // Index of letters

        if(indexLetra1 != undefined){
             console.log(`${indexLetra1} => ${contadorLetra1} => ${pontos[contadorLetra1]}`);
             contador1 += pontos[contadorLetra1];
        }
    }
    console.log("------------------------------------");
    for(let index = 0; index < user2.length; index++){
        let indexLetra2 = user2[index];
        let contadorLetra2 = alfabeto.indexOf(indexLetra2); // Index of letters

        if(indexLetra2 != undefined){
             console.log(`${indexLetra2} => ${contadorLetra2} => ${pontos[contadorLetra2]}`);
             contador2 += pontos[contadorLetra2];
        }
    }
    console.log("------------------------------------");
    if(contador1 > contador2){
        console.log("Player 1 wins!");
    } else if(contador2 > contador1) {
        console.log("Player 2 wins!");
    }else{
        console.log("It's a tie.")
    }
    console.log("------------------------------------");
    console.log("Player 1: "  + contador1);
    console.log("Player 2: " + contador2);
};

let user1 = "COMPUTER".toLowerCase();
let user2 = "BOLIGRAFO".toLowerCase();
// Calling the function
winner(user1, user2);