# Write your MySQL query statement below
SELECT DISTINCT B.title AS TITLE
FROM TVProgram AS A
INNER JOIN Content AS B ON(
  A.content_id = B.content_id 
  AND B.Kids_content = 'Y' 
  AND MONTH(A.program_date) = 6 
  AND YEAR(A.program_date) = 2020
  AND B.content_type = 'Movies'
)