# Write your MySQL query statement below
SELECT DISTINCT A.sub_id AS post_id, 
(SELECT COUNT(DISTINCT B.sub_id) FROM Submissions AS B WHERE A.sub_id = B.parent_id) AS number_of_comments
FROM Submissions AS A
WHERE A.parent_id IS NULL
ORDER BY A.sub_id