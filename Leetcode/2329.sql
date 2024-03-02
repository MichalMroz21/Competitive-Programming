# Write your MySQL query statement below
SELECT S.user_id, SUM(S.quantity * P.price) AS spending
FROM Sales AS S
INNER JOIN Product AS P ON(S.product_id = P.product_id)
GROUP BY user_id
ORDER BY spending DESC