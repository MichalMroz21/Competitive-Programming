# Write your MySQL query statement belo
SELECT A.id, A.year, COALESCE(B.npv, 0) AS npv
FROM Queries AS A
LEFT JOIN NPV AS B ON (A.id = B.id AND A.year = B.year)
ORDER BY A.id, A.year