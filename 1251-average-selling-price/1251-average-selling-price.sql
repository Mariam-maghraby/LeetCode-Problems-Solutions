-- # Write your MySQL query statement below
SELECT Prices.product_id, IFNULL(ROUND(sum(Prices.price * UnitsSold.units)/sum(UnitsSold.units),2),0) as average_price 
from Prices 
LEFT JOIN UnitsSold 
on Prices.product_id = UnitsSold.product_id 
AND UnitsSold.purchase_date between Prices.start_date 
AND Prices.end_date 
GROUP BY Prices.product_id 

