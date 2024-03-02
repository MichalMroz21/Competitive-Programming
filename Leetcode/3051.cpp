# Write your MySQL query statement below
SELECT DISTINCT(candidate_id ) FROM Candidates
GROUP BY candidate_id 
HAVING COUNT(CASE WHEN skill = "Python" THEN skill END) >= 1 AND
 COUNT(CASE WHEN skill = "Tableau" THEN skill END) >= 1 AND
  COUNT(CASE WHEN skill = "PostgreSQL" THEN skill END) >= 1
 ORDER BY candidate_id 