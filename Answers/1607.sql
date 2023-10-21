# Write your MySQL query statement below
SELECT S.seller_name AS seller_name
FROM Seller AS S
LEFT JOIN Orders AS O ON(O.seller_id = S.seller_id)
GROUP BY S.seller_id
HAVING SUM(IF(YEAR(O.sale_date) = 2020, 1, 0)) = 0
ORDER BY seller_name