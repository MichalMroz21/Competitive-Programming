# Write your MySQL query statement below
SELECT E1.symbol AS metal, E2.symbol AS nonmetal
FROM Elements AS E1
CROSS JOIN Elements AS E2 ON (E1.type = "Metal" AND E2.type = "Nonmetal")