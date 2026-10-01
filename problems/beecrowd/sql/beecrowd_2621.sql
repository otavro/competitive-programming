select pd.name 
from providers as pv
inner join products as pd on pv.id = pd.id_providers
where pd.amount >= 10 and pd.amount <=20 and pv.name like 'P%'