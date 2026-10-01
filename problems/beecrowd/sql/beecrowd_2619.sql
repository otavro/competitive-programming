select pd.name, pv.name, pd.price
from products as pd
inner join providers as pv on pd.id_providers = pv.id
inner join categories as c on c.id = pd.id_categories
where pd.price > 1000 and c.name = 'Super Luxury'