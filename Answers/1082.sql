# Write your MySQL query statement below
SELECT seller_id FROM Sales
GROUP BY seller_id
HAVING Sum(price) >= ALL (
    SELECT Sum(price) FROM Sales
    GROUP BY seller_id
)