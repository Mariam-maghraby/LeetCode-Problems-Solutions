SELECT product_id, year as first_year, quantity, price from Sales
Where (product_id, year)
IN (SELECT
    product_id, min(year) as first_year
FROM Sales
GROUP BY product_id)

