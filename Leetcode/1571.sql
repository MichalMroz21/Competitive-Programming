# Write your MySQL query statement below
SELECT W.name AS warehouse_name, SUM(W.units * P.Width * P.Length * P.Height) AS volume
FROM Warehouse AS W
INNER JOIN Products P ON (W.product_id = P.product_id)
GROUP BY W.name