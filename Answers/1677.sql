# Write your MySQL query statement below
SELECT P.name, COALESCE(SUM(I.rest), 0) AS rest, COALESCE(SUM(paid), 0) AS paid, COALESCE(SUM(canceled), 0) AS canceled, COALESCE(SUM(refunded), 0) AS refunded
FROM Product AS P
LEFT JOIN Invoice AS I ON(P.product_id = I.product_id)
GROUP BY P.product_id
ORDER BY P.name