# Write your MySQL query statement below
SELECT employee_id, department_id
FROM Employee
GROUP BY employee_id
HAVING COUNT(*) = 1 AND SUM(IF(primary_flag = 'N', 1, 0)) = 1

UNION ALL

SELECT employee_id, department_id
FROM Employee
WHERE primary_flag = 'Y'
GROUP BY employee_id
