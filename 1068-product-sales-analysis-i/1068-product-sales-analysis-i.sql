# Write your MySQL query statement below
SELECT
pr.product_name,
p.year,
p.price
FROM 
Sales p JOIN Product pr
ON p.product_id=pr.product_id;