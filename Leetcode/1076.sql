# Write your MySQL query statement below
SELECT project_id
FROM Project
GROUP BY project_id
HAVING Count(*) = (
SELECT COUNT(*) AS c 
FROM Project
GROUP BY project_id
ORDER BY COUNT(*) DESC
LIMIT 1
)
