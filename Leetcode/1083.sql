# Write your MySQL query statement below
SELECT DISTINCT buyer_id FROM Sales s
INNER JOIN Product p ON s.product_id = p.product_id
WHERE s.buyer_id NOT IN (
    SELECT buyer_id FROM Sales s
    INNER JOIN Product p ON s.product_id = p.product_id
    WHERE p.product_name = 'iPhone'
) AND p.product_name = 'S8';


