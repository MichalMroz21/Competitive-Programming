# Write your MySQL query statement below
SELECT E1.employee_id
FROM Employees AS E1
WHERE E1.salary < 30000 AND NOT EXISTS (SELECT 1 FROM Employees AS E2 WHERE E1.manager_id = E2.employee_id) AND E1.manager_id IS NOT NULL
ORDER BY E1.employee_id