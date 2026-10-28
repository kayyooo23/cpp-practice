# cpp-practice

C++ practice on the way to a junior developer role (long-term goal: low-latency/HFT C++).

Learning in public — this repo holds solved problems and small self-contained projects, built and verified with `g++ -std=c++17 -Wall -Wextra`.

## LeetCode

9 problems solved so far (9 Easy, 0 Medium, 0 Hard), organized by topic under `leetcode/`. Written without starter templates. The code here is my actual accepted submission, not a cleaned-up version — e.g. Two Sum below is the brute-force approach I submitted, not the optimized hash-map one.

### arrays_and_hashing

| # | Problem | Approach | Time |
|---|---|---|---|
| 1 | Two Sum | brute-force pair check (not the optimized hash-map version) | O(n^2) |
| 121 | Best Time to Buy and Sell Stock | single pass, track min price seen so far | O(n) |
| 136 | Single Number | XOR all elements | O(n) |
| 217 | Contains Duplicate | hand-rolled open-addressing hash table (not unordered_set) | O(n) |
| 485 | Max Consecutive Ones | single pass, track current/best run | O(n) |
| 1480 | Running Sum of 1d Array | in-place prefix sum | O(n) |

### strings

| # | Problem | Approach | Time |
|---|---|---|---|
| 242 | Valid Anagram | hash map letter counting | O(n) |
| 1108 | Defanging an IP Address | walk the string, replace '.' with "[.]" | O(n) |

### stacks

| # | Problem | Approach | Time |
|---|---|---|---|
| 20 | Valid Parentheses | stack-based bracket matching | O(n) |

## Topics covered so far

References and pointers, stack vs heap memory, manual memory management (new/delete), recursion and the call stack, threads and data races, virtual memory and caching basics, undefined behavior.

## What's next

Smart pointers, move semantics, a small self-directed project (a number-guessing game — own design, no tutorial), then more LeetCode and a longer-term order book project.

## Progress tracker

Full learning roadmap: [quant-roadmap](https://kayyooo23.github.io/quant-roadmap/)
