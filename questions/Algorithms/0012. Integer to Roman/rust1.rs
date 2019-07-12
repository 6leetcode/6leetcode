struct Solution {}

impl Solution {
    pub fn int_to_roman(num: i32) -> String {
        let mut number: i32 = num;
        let mut result = String::from("");
        let symbol = [
            "M",
            "CM",
            "D",
            "CD",
            "C",
            "XC",
            "L",
            "XL",
            "X",
            "IX",
            "V",
            "IV",
            "I",
        ];
        let value = [1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1];
        let mut index: usize = 0;
        while number > 0 {
            while number >= value[index] {
                number -= value[index];
                result += symbol[index];
            }
            index += 1;
        }
        return result;
    }
}

fn main() {
    let input: i32 = 3999;
    println!("Input: {}", input);
    println!("Output: {}", Solution::int_to_roman(input));
}
