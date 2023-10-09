# Write your MySQL query statement below
SELECT  p.product_id, p.product_name from product p where
exists (select 1 from sales s where s.product_id = p.product_id and s.sale_date between '2019-01-01' and '2019-03-31') and
not exists (select 1 from sales s where s.product_id = p.product_id and s.sale_date not between '2019-01-01' and '2019-03-31')