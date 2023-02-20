# Version Control Systems Task

The goal of this task is to learn basic VCS commands, like how to initiate a repo, make branches, merge, and solve merge
conflicts

## Steps

1. Create a new directory and initialize a git repository inside it
2. Create a new C++ file `main.cpp` that contain the `getSum()` function
3. Commit the code to the master branch

    ```
     git add main.cpp
     git commit -m "Initial commit"
    ```

4. Create two branches `average` and `minimum`

    ```
    git branch average
    git branch minimum
    ```

5. Switch to the average branch

    ```
    git checkout average
    ```

6. Add a new function `getAverage()` to the `main.cpp` file
7. Commit the changes to the average branch
    ```
    git add main.cpp
    git commit -m "Add getAverage function"
    ```
8. Switch to the `minimum` branch and add a new function `getMin` to the `main.cpp` file
    ```
    git checkout minimum
    ```
9. Commit the changes to the `minimum` branch
    ```
    git add main.cpp
    git commit -m "Add getMin function"
    ```
10. Switch back to the `master` branch and merge the `average` branch into it
    ```
    git checkout master
    git merge average
    ```
11. Merge the `minimum` branch into the `master` branch
    ```
    git merge minimum
    ```
12. Resolve merge conflicts
