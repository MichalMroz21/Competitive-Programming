# Write your MySQL query statement below
SELECT U.user_id, U.name, IF(R.distance IS NULL, 0, SUM(R.distance)) AS "traveled distance" 
FROM Users AS U
LEFT JOIN Rides AS R ON (U.user_id = R.user_id)
GROUP BY U.user_id
ORDER BY U.user_id