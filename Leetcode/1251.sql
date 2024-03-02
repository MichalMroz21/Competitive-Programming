# Write your MySQL query statement below
SELECT A.product_id, COALESCE(ROUND(SUM(A.price * B.units) / SUM(B.units), 2), 0) AS average_price
FROM Prices AS A
LEFT JOIN UnitsSold AS B ON (A.product_id = B.product_id AND purchase_date <= end_date AND purchase_date >= start_date)
GROUP BY A.product_id