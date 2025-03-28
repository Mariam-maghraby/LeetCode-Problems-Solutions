
SELECT 
ROUND(
    (SELECT COUNT(*) FROM Delivery d
        where d.order_date = d.customer_pref_delivery_date 
        and 
        d.order_date = 
        (SELECT MIN(order_date) FROM Delivery where d.customer_id = customer_id)
    )*100 / (select count(DISTINCT customer_id) from Delivery)
, 2) as immediate_percentage




 