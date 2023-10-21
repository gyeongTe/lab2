use std::collections::BTreeMap;
use std::io;

struct Student {
    mid_term_score: i32,
    final_score: i32,
}

fn main() {
    let mut num_students = String::new();
    println!("Please enter the number of students:");
    io::stdin().read_line(&mut num_students).expect("input error");
    let num_students: i32 = num_students.trim().parse().expect("Error converting to integer");

    let mut student_map = BTreeMap::new();

    for _ in 0..num_students {
        let mut name = String::new();
        let mut student = Student {
            mid_term_score: 0,
            final_score: 0,
        };

        println!("Please enter the number of students:");
        io::stdin().read_line(&mut name).expect("input error");
        let name = name.trim().to_string();

        println!("Please enter the middle score:");
        let mut mid_term_score = String::new();
        io::stdin().read_line(&mut mid_term_score).expect("input error");
        let mid_term_score: i32 = mid_term_score.trim().parse().expect("Error converting to integer");
        student.mid_term_score = mid_term_score;

        println!("Please enter the final score:");
        let mut final_score = String::new();
        io::stdin().read_line(&mut final_score).expect("input error");
        let final_score: i32 = final_score.trim().parse().expect("Error converting to integer");
        student.final_score = final_score;

        student_map.insert(name, student);
    }

    println!("student information:");
    for (name, student) in student_map.iter() {
        println!("name: {}, midle score: {}, final score: {}", name, student.mid_term_score, student.final_score);
    }
}
