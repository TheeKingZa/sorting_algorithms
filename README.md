# Sorting Algorithms
0x1B. C
-------

# Sorting Algorithms and Big O Notation Project
    Introduction
    This project is a C-based exploration of various sorting algorithms and their time complexity analysis using Big O notation. It covers four different sorting algorithms, explains the concept of Big O notation, demonstrates how to evaluate the time complexity of an algorithm, and provides guidance on selecting the best sorting algorithm for different input scenarios. Additionally, it discusses the concept of a stable sorting algorithm.

---

# Sorting Algorithms
    This project includes implementations and explanations of the following sorting algorithms:

[^](#Sorting-algorithms)

# Bubble Sort
    * Description: Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.
    * Time Complexity (Big O): O(n^2) in the worst and average cases, O(n) in the best case (when the list is already sorted).

[^](#Sorting-algorithms)

# Selection Sort
    * Description: Selection Sort is an in-place comparison sorting algorithm that divides the input list into a sorted and an unsorted region.
    * Time Complexity (Big O): O(n^2) in all cases, making it inefficient for large lists.

[^](#Sorting-algorithms)

# Insertion Sort
    * Description: Insertion Sort is another simple sorting algorithm that builds the final sorted array one item at a time.
    * Time Complexity (Big O): O(n^2) in the worst and average cases, O(n) in the best case (when the list is nearly sorted).

[^](#Sorting-algorithms)

# Merge Sort
    * Description: Merge Sort is a divide-and-conquer algorithm that recursively divides the input list into smaller sublists, sorts them, and then merges them back together.
    * Time Complexity (Big O): O(n log n) in all cases, making it more efficient than the previous algorithms for larger lists.

[^](#Sorting-algorithms)

# Big O Notation
    Big O notation is a mathematical notation used to describe the upper bound of an algorithm's time complexity in terms of its input size. It provides a way to analyze and compare the efficiency of algorithms. Common Big O complexities include O(1), O(log n), O(n), O(n log n), O(n^2), and more.

[^](#Sorting-algorithms)

# Evaluating Time Complexity
    To evaluate the time complexity of an algorithm, you can analyze the number of basic operations (comparisons, assignments, etc.) it performs as a function of its input size. Big O notation helps express this relationship.

[^](#Sorting-algorithms)

# Selecting the Best Sorting Algorithm
    Choosing the best sorting algorithm for a given input depends on various factors, including the size of the input, the initial order of elements, and available memory. Here are some guidelines:

    * For small lists or nearly sorted lists, Insertion Sort may be the best choice due to its lower overhead.
    * For larger lists, Merge Sort or more efficient algorithms like Quick Sort or Heap Sort are preferable.
    * Selection Sort is generally not recommended due to its consistently poor performance.

[^](#Sorting-algorithms)

# Stable Sorting Algorithm
    A stable sorting algorithm is one where the relative order of equal elements remains unchanged after sorting. Merge Sort is an example of a stable sorting algorithm, while Quick Sort is not stable by default.


    Usage
    To use this project, follow these steps:

      1. Clone the repository.
      2. Compile the C code for the sorting algorithms of your choice.
      3. Run the compiled executable with your input data.
---

[^](#Sorting-algorithms)
