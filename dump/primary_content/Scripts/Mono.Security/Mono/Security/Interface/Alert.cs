namespace Mono.Security.Interface;

public class Alert
{
	private AlertLevel level;

	private AlertDescription description;

	public AlertLevel Level => (AlertLevel)0;

	public AlertDescription Description => AlertDescription.CloseNotify;

	public Alert(AlertDescription description)
	{
	}

	private void inferAlertLevel()
	{
	}

	public override string ToString()
	{
		return null;
	}
}
