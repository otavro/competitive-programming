select pd.name, pv.name, c.name
from products as pd
inner join providers as pv on pv.id = pd.id_providers
inner join categories as c on c.id = pd.id_categories
where pv.name = 'Sansul SA' and c.name = 'Imported'