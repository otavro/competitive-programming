select pd.name, pr.name
from products as pd
inner join providers as pr on pr.id = pd.id_providers
where pr.name = 'Ajax SA' 