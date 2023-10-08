# Write your MySQL query statement below
SELECT p.product_name, SUM(o.unit) AS unit FROM Orders o 
INNER JOIN Products p ON o.product_id = p.product_id
WHERE MONTH(o.order_date) = 2 and YEAR(o.order_date) = 2020
GROUP BY o.product_id
HAVING unit >= 100;