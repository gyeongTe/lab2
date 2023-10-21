use std::io;

fn main() {
    let mut input = String::new();

    println!("Enter the size of the row: ");
    io::stdin().read_line(&mut input).expect("input error");
    let row: usize = input.trim().parse().expect("Error converting to integer");
    input.clear();

    println!("Enter the size of the col: ");
    io::stdin().read_line(&mut input).expect("input error");
    let col: usize = input.trim().parse().expect("Error converting to integer");

    let mut matrix1 = vec![vec![0; col]; row];
    let mut matrix2 = vec![vec![0; col]; row];

    println!("matrix1 input: ");
    for i in 0..row {
        input.clear();
        io::stdin().read_line(&mut input).expect("input error");
        let values: Vec<i32> = input
            .split_whitespace()
            .filter_map(|s| s.parse().ok())
            .collect();
        matrix1[i].copy_from_slice(&values);
    }

    println!("marix2 input: ");
    for i in 0..row {
        input.clear();
        io::stdin().read_line(&mut input).expect("input error");
        let values: Vec<i32> = input
            .split_whitespace()
            .filter_map(|s| s.parse().ok())
            .collect();
        matrix2[i].copy_from_slice(&values);
    }

    println!("matrix1 + matrix2 result: ");
    for i in 0..row {
        for j in 0..col {
            print!("{}", matrix1[i][j] + matrix2[i][j]);
        }
        println!();
    }
}

