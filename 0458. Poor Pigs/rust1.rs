use std::f32;

struct Solution {}

impl Solution {
    pub fn poor_pigs(buckets: i32, minutes_to_die: i32, minutes_to_test: i32) -> i32 {
        let base = (minutes_to_test / minutes_to_die + 1) as f32;
        let buckets_f = buckets as f32;
        return (buckets_f.log10() / base.log10()).ceil() as i32;
    }
}

fn main() {
    let buckets: i32 = 1000;
    let minutes_to_die: i32 = 15;
    let minutes_to_test: i32 = 1000;
    println!(
        "Input: {}, {}, {}",
        buckets,
        minutes_to_die,
        minutes_to_test
    );
    println!(
        "Output: {}",
        Solution::poor_pigs(buckets, minutes_to_die, minutes_to_test)
    );
}
