class BloodTestRpt
{
	static void DisplayReport(ActionBase action, PlayerBase player, PlayerBase target)
	{
	string output = "";
	string preoutput = "";
	int count = 0;

	string  m_Entries[6];
	m_Entries[0] = "";
	m_Entries[1] = "";
	m_Entries[2] = ""
	m_Entries[3] = "";
	m_Entries[4] = "";
	m_Entries[5] = "";



		action.SendMessageToClient(player, "Cholera: " + target.GetSingleAgentCount(eAgents.CHOLERA).ToString()  + "   This line will not exist when all tested");
		action.SendMessageToClient(player, "Salmonella: " + target.GetSingleAgentCount(eAgents.SALMONELLA).ToString() + "  This line will not exist when all tested");
		action.SendMessageToClient(player, "Influenza: " + target.GetSingleAgentCount(eAgents.INFLUENZA).ToString() + "  This line will not exist when all tested");
		action.SendMessageToClient(player, "Food Poison: " + target.GetSingleAgentCount(eAgents.FOOD_POISON).ToString() + "  This line will not exist when all tested");
		action.SendMessageToClient(player, "Chemical Poison: " + target.GetSingleAgentCount(eAgents.CHEMICAL_POISON).ToString() + "  This line will not exist when all tested");
		action.SendMessageToClient(player, "Wound Infection: " + target.GetSingleAgentCount(eAgents.WOUND_AGENT).ToString() + "  This line will not exist when all tested");



	if(target.GetSingleAgentCount(eAgents.CHOLERA) > 0)
	{
		if(target.GetSingleAgentCount(eAgents.CHOLERA) < 100)
		{
			m_Entries[0] = " Cholera. ";
		}	

		if(target.GetSingleAgentCount(eAgents.CHOLERA) > 100  && target.GetSingleAgentCount(eAgents.CHOLERA) < 200)
		{
			m_Entries[0] = " High level of Cholera. ";
		}	

		if(target.GetSingleAgentCount(eAgents.CHOLERA) > 200)
		{
			m_Entries[0] = " Very High level of Cholera. ";
		}
	count++;		
	}

	if(target.GetSingleAgentCount(eAgents.SALMONELLA) > 0)
	{

		if(target.GetSingleAgentCount(eAgents.SALMONELLA) < 100)
		{
			m_Entries[1] = " Salmonella. ";
		}	

		if(target.GetSingleAgentCount(eAgents.SALMONELLA) > 100  && target.GetSingleAgentCount(eAgents.SALMONELLA) < 200  )
		{
			m_Entries[1] = "High level of  Salmonella. ";
		}	

		if(target.GetSingleAgentCount(eAgents.SALMONELLA) > 200)
		{
			m_Entries[1] = " Very High level of  Salmonella .";
		}
	count++;	

	}

	if(target.GetSingleAgentCount(eAgents.INFLUENZA) > 0)
	{

		if(target.GetSingleAgentCount(eAgents.INFLUENZA) < 100)
		{
			m_Entries[2] = " Influenza. ";
		}	

		if(target.GetSingleAgentCount(eAgents.INFLUENZA) > 100  && target.GetSingleAgentCount(eAgents.INFLUENZA) < 200 )
		{
			m_Entries[2] = "High level of  Influenza. ";
		}	

				if(target.GetSingleAgentCount(eAgents.INFLUENZA) > 200)
		{
			m_Entries[2] = " Very High level of  Influenza .";
		}
	count++;	

	}




	if(target.GetSingleAgentCount(eAgents.FOOD_POISON) > 0)
	{

		if(target.GetSingleAgentCount(eAgents.FOOD_POISON) < 100)
		{
			m_Entries[3] = "  Food Poisoning . ";
		}	

		if(target.GetSingleAgentCount(eAgents.FOOD_POISON) > 100  && target.GetSingleAgentCount(eAgents.FOOD_POISON) < 200 )
		{
			m_Entries[3] = "High level of  Food Poisoning . ";
		}	

				if(target.GetSingleAgentCount(eAgents.FOOD_POISON) > 200)
		{
			m_Entries[3] = " Very High level of  Food Poisoning .";
		}
	count++;	

	}


	if(target.GetSingleAgentCount(eAgents.CHEMICAL_POISON) > 0)
	{

		if(target.GetSingleAgentCount(eAgents.CHEMICAL_POISON) < 100)
		{
			m_Entries[4] = "  Chemical Poisoning. ";
		}	

		if(target.GetSingleAgentCount(eAgents.CHEMICAL_POISON) > 100  && target.GetSingleAgentCount(eAgents.CHEMICAL_POISON) < 200 )
		{
			m_Entries[4] = "High level of Chemical Poisoning . ";
		}	

				if(target.GetSingleAgentCount(eAgents.CHEMICAL_POISON) > 200)
		{
			m_Entries[4] = " Very High level of  Chemical Poisoning .";
		}
	count++;	

	}


	if(target.GetSingleAgentCount(eAgents.WOUND_AGENT) > 0)
	{

		if(target.GetSingleAgentCount(eAgents.WOUND_AGENT) < 100)
		{
			m_Entries[5] = "  Wound Infection. ";
		}	

		if(target.GetSingleAgentCount(eAgents.WOUND_AGENT) > 100  && target.GetSingleAgentCount(eAgents.WOUND_AGENT) < 200 )
		{
			m_Entries[5] = "High level of wound Infection. ";
		}	

		if(target.GetSingleAgentCount(eAgents.WOUND_AGENT) > 200)
		{
			m_Entries[5] = " Very High level of wound Infection.";
		}
	count++;	
	}

	if(count == 0)
	{
	output = "You have  NO  cholera / salmonella / wound infection / chemical poisoning or food poisoning"  ;
	}


	if(count == 1)
	{
	output = "You have " + m_Entries[0] +  m_Entries[1] +  m_Entries[2] +  m_Entries[3] +  m_Entries[4] +  m_Entries[5] ;
	}

	
	if(count > 1)
	{
		if(m_Entries[0] != "")
		{
			if(m_Entries[2] != "")
			{
			preoutput = m_Entries[0] + " and ";
			output =  preoutput;
			}
			else
			{

			}
		}

		if(m_Entries[1] != "")
		{
			if(m_Entries[2] != "")
			{
			preoutput = m_Entries[1] + " and ";
			output = output + preoutput;
			}
		}

		if(m_Entries[2] != "")
		{

			if(m_Entries[3] != "")
			{
			preoutput = m_Entries[2] + " and ";
			output = output + preoutput;
			}

		}

		if(m_Entries[3] != "")
		{
			if(m_Entries[4] != "")
			{
			preoutput = m_Entries[3] + " and ";
			output = output + preoutput;
			}

		}

		if(m_Entries[4] != "")
		{
			if(m_Entries[5] != "")
			{
			preoutput = m_Entries[4] + " and ";
			output = output + preoutput;
			}
		}

		if(m_Entries[5] != "")
		{
			preoutput = m_Entries[5];
			output = output + preoutput;
		}


	

	//output = "You have " + m_Entries[0] +  m_Entries[1] +  m_Entries[2] +  m_Entries[3] +  m_Entries[4] +  m_Entries[5] ;
	}

	

	//output = "You have " + m_Entries[0] +  m_Entries[1] +  m_Entries[2] +  m_Entries[3] +  m_Entries[4] +  m_Entries[5] ;
	action.SendMessageToClient(player, output );
	
	}
}

modded class ActionTestBloodSelf
{
	override void OnFinishProgressServer(ActionData action_data)
	{	
		super.OnFinishProgressServer(action_data);
		BloodTestRpt.DisplayReport(this, action_data.m_Player, action_data.m_Player);
	}
}