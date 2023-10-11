# Write your MySQL query statement below
SELECT '[0-5>' as bin, SUM(IF (duration >= 0 AND duration < 300, 1, 0)) AS total FROM Sessions 
UNION ALL
SELECT '[5-10>' as bin, SUM(IF (duration >= 300 AND duration < 600, 1, 0)) AS total FROM Sessions 
UNION ALL
SELECT '[10-15>' as bin, SUM(IF (duration >= 600 AND duration < 900, 1, 0)) AS total FROM Sessions 
UNION ALL
SELECT '15 or more' as bin, SUM(IF (duration >= 900, 1, 0)) AS total FROM Sessions 