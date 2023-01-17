class cureallbottle : Edible_Base
{
	//override void InitItemVariables()
	//{
	//	super.InitItemVariables();
	//	can_this_be_combined = true;
	//}
	
	override void OnConsume(float amount, PlayerBase consumer)
	{
		if( consumer.GetModifiersManager().IsModifierActive(eModifiers.MDF_ANTIBIOTICS))//effectively resets the timer
		{
			consumer.GetModifiersManager().DeactivateModifier( eModifiers.MDF_ANTIBIOTICS );
		}
		consumer.GetModifiersManager().ActivateModifier( eModifiers.MDF_ANTIBIOTICS );
	}

	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceConsumeSingle);
		AddAction(ActionConsumeSingle);
		//AddAction(ActionForceFeed);
		//AddAction(ActionEatBig);
	}
}