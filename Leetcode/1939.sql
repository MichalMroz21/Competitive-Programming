# Write your MySQL query statement below
SELECT DISTINCT A.user_id
FROM Confirmations AS A
CROSS JOIN Confirmations AS B ON(A.user_id = B.user_id)
WHERE timestampdiff(second, A.time_stamp,B.time_stamp) BETWEEN 1 AND 86400;