# 📊 LeetCode Problem: Reorder Routes to Make All Paths Lead to the City Zero

## 🧩 Problem Statement

There are `n` **cities** numbered from `0` to `n - 1` and `n - 1` **roads** such that there is only one way to **travel** between two different **cities** (this network form a tree). Last year, The ministry of transport decided to orient the **roads** in **one direction** because they are too narrow.
**Roads** are represented by `connections` where `connections[i] = [ai, bi]` represents `a` road from city `ai` to city `bi`.
This year, there will be a big event in the capital (`city 0`), and many people want to **travel** to this city.
Your task consists of **reorienting** some roads such that each city can visit the city `0`. Return the **minimum** number of **edges** changed.



> **Note :**
> - It's guaranteed that each city can reach city 0 after reorder.



## 🧠 Approach: DFS Traversal

> **Graph** Construction:
> - For every road `u -> v:`
> - Add `(v, 1)` meaning this **edge** needs to be **reversed** to reach 0.
> - Add `(u, 0)` meaning this **edge** is already in the **correct direction**.

> **DFS** Traversal:
> - Start from `city 0`.
> - Keep **track** of **visited nodes** to avoid cycles.
> - For each neighbor, if it hasn’t been visited: 
> - Add `1` to `count` if the **edge** needs **reordering**.
> - **Recursively** explore the next city.

- The `counter` after **DFS** gives the **minimum** number of roads to **reorder**.



## ✅ Example Walkthrough

### Example 1

##### Input: n = 6, connections = [[0,1],[1,3],[2,3],[4,0],[4,5]]
##### Output: 3

##### Explanation: 
<pre> 
  - Change the direction of edges show in red such that each node can reach the node 0 (capital).
</pre>

### Example 2

##### Input: n = 5, connections = [[1,0],[1,2],[3,2],[3,4]]
##### Output: 2

##### Explanation: 
<pre> 
  - Change the direction of edges show in red such that each node can reach the node 0 (capital).
  
</pre>

### Example 3

##### Input: n = 3, connections = [[1,0],[2,0]]
##### Output: 0


## 🛠️ Constraints

- `2 <= n <= 5 * 10^4`
- `connections.length == n - 1`
- `connections[i].length == 2`
- `0 <= ai, bi <= n - 1`
- `ai != bi`
