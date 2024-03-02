# Write your MySQL query statement below
SELECT C.customer_id, C.name
FROM Customers AS C 
INNER JOIN Orders AS O ON(O.customer_id = C.customer_id)
INNER JOIN Product AS P ON(O.product_id = P.product_id)
GROUP BY C.customer_id
HAVING sum( CASE WHEN LEFT(o.order_date, 7) = "2020-06" THEN quantity * price END) >= 100 
AND	   sum( CASE WHEN LEFT(o.order_date, 7) = "2020-07" THEN quantity * price END) >= 100

