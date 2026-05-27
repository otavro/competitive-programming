select products.id, products.name 
from products 
where price < 10 or price > 100 
order by products.id asc;