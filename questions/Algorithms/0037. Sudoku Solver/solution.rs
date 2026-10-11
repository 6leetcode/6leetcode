struct Solution {}

const N: u8 = 3;
const M: u8 = N * N;

//   bool rule_col[N][N] = {false};
//   bool rule_box[N][N] = {false};

impl Solution {
    pub fn solve_sudoku(_board: &mut Vec<Vec<char>>) {}
}
// let mut rule_row = [[0u8; N], N];

fn main() {
    let mut board: Vec<Vec<char>> = vec![
        vec!['.', '.', '9', '7', '4', '8', '.', '.', '.'],
        vec!['7', '.', '.', '.', '.', '.', '.', '.', '.'],
        vec!['.', '2', '.', '1', '.', '9', '.', '.', '.'],
        vec!['.', '.', '7', '.', '.', '.', '2', '4', '.'],
        vec!['.', '6', '4', '.', '1', '.', '5', '9', '.'],
        vec!['.', '9', '8', '.', '.', '.', '3', '.', '.'],
        vec!['.', '.', '.', '8', '.', '3', '.', '2', '.'],
        vec!['.', '.', '.', '.', '.', '.', '.', '.', '6'],
        vec!['.', '.', '.', '2', '7', '5', '9', '.', '.'],
    ];
    // let origin_board: String = board.copy_from_slice(src: &[T])();
    print!("Input:  ");
    for row in &board {
        for col in row {
            print!("{}", col);
        }
    }
    println!();
    Solution::solve_sudoku(&mut board);
    print!("Output: ");
    for row in &board {
        for col in row {
            print!("{}", col);
        }
    }
    println!();
}
