# Write your MySQL query statement below
SELECT MIN(abs(a.x - b.x)) AS shortest
FROM Point a, Point b
WHERE a.x > b.x;