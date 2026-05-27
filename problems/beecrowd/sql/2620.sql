select c.name, o.id 
from customers as c
inner join  orders as o on o.id_customers = c.id
where extract(month from o.orders_date) <= 6