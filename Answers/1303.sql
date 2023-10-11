# Write your MySQL query statement below
SELECT employee_id, (SELECT COUNT(*) FROM Employee AS E2 WHERE E.team_id = E2.team_id) AS team_size
FROM Employee AS E