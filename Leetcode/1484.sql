# Write your MySQL query statement below
SELECT sell_date, Count(DISTINCT product) as num_sold, group_concat(DISTINCT product SEPARATOR ',') as products 
FROM Activities
GROUP BY sell_date