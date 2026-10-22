using System.Runtime.CompilerServices;
using System.Text;

namespace System.IO;

/// <summary>Represents a writer that can write a sequential series of characters. This class is abstract.</summary>
[Serializable]
public abstract class TextWriter : MarshalByRefObject, IDisposable
{
	[Serializable]
	private sealed class NullTextWriter : TextWriter
	{
		public override Encoding Encoding => null;

		internal NullTextWriter()
		{
		}

		public override void Write(char[] buffer, int index, int count)
		{
		}

		public override void Write(string value)
		{
		}

		public override void WriteLine()
		{
		}

		public override void WriteLine(string value)
		{
		}

		public override void WriteLine(object value)
		{
		}

		public override void Write(char value)
		{
		}
	}

	[Serializable]
	internal sealed class SyncTextWriter : TextWriter, IDisposable
	{
		private readonly TextWriter _out;

		public override Encoding Encoding => null;

		public override IFormatProvider FormatProvider => null;

		public override string NewLine
		{
			[MethodImpl(MethodImplOptions.Synchronized)]
			get
			{
				return null;
			}
		}

		internal SyncTextWriter(TextWriter t)
		{
		}

		[MethodImpl(MethodImplOptions.Synchronized)]
		public override void Close()
		{
		}

		[MethodImpl(MethodImplOptions.Synchronized)]
		protected override void Dispose(bool disposing)
		{
		}

		[MethodImpl(MethodImplOptions.Synchronized)]
		public override void Flush()
		{
		}

		[MethodImpl(MethodImplOptions.Synchronized)]
		public override void Write(char value)
		{
		}

		[MethodImpl(MethodImplOptions.Synchronized)]
		public override void Write(char[] buffer)
		{
		}

		[MethodImpl(MethodImplOptions.Synchronized)]
		public override void Write(char[] buffer, int index, int count)
		{
		}

		[MethodImpl(MethodImplOptions.Synchronized)]
		public override void Write(string value)
		{
		}

		[MethodImpl(MethodImplOptions.Synchronized)]
		public override void WriteLine()
		{
		}

		[MethodImpl(MethodImplOptions.Synchronized)]
		public override void WriteLine(string value)
		{
		}

		[MethodImpl(MethodImplOptions.Synchronized)]
		public override void WriteLine(object value)
		{
		}
	}

	/// <summary>Provides a <see langword="TextWriter" /> with no backing store that can be written to, but not read from.</summary>
	public static readonly TextWriter Null;

	private static readonly char[] s_coreNewLine;

	/// <summary>Stores the newline characters used for this <see langword="TextWriter" />.</summary>
	protected char[] CoreNewLine;

	private string CoreNewLineStr;

	private IFormatProvider _internalFormatProvider;

	/// <summary>Gets an object that controls formatting.</summary>
	/// <returns>An <see cref="T:System.IFormatProvider" /> object for a specific culture, or the formatting of the current culture if no other culture is specified.</returns>
	public virtual IFormatProvider FormatProvider => null;

	/// <summary>When overridden in a derived class, returns the character encoding in which the output is written.</summary>
	/// <returns>The character encoding in which the output is written.</returns>
	public abstract Encoding Encoding { get; }

	/// <summary>Gets or sets the line terminator string used by the current <see langword="TextWriter" />.</summary>
	/// <returns>The line terminator string for the current <see langword="TextWriter" />.</returns>
	public virtual string NewLine => null;

	/// <summary>Initializes a new instance of the <see cref="T:System.IO.TextWriter" /> class.</summary>
	protected TextWriter()
	{
	}

	/// <summary>Initializes a new instance of the <see cref="T:System.IO.TextWriter" /> class with the specified format provider.</summary>
	/// <param name="formatProvider">An <see cref="T:System.IFormatProvider" /> object that controls formatting.</param>
	protected TextWriter(IFormatProvider formatProvider)
	{
	}

	/// <summary>Closes the current writer and releases any system resources associated with the writer.</summary>
	public virtual void Close()
	{
	}

	/// <summary>Releases the unmanaged resources used by the <see cref="T:System.IO.TextWriter" /> and optionally releases the managed resources.</summary>
	/// <param name="disposing">
	///   <see langword="true" /> to release both managed and unmanaged resources; <see langword="false" /> to release only unmanaged resources.</param>
	protected virtual void Dispose(bool disposing)
	{
	}

	/// <summary>Releases all resources used by the <see cref="T:System.IO.TextWriter" /> object.</summary>
	public void Dispose()
	{
	}

	/// <summary>Clears all buffers for the current writer and causes any buffered data to be written to the underlying device.</summary>
	public virtual void Flush()
	{
	}

	/// <summary>Writes a character to the text string or stream.</summary>
	/// <param name="value">The character to write to the text stream.</param>
	/// <exception cref="T:System.ObjectDisposedException">The <see cref="T:System.IO.TextWriter" /> is closed.</exception>
	/// <exception cref="T:System.IO.IOException">An I/O error occurs.</exception>
	public virtual void Write(char value)
	{
	}

	/// <summary>Writes a character array to the text string or stream.</summary>
	/// <param name="buffer">The character array to write to the text stream.</param>
	/// <exception cref="T:System.ObjectDisposedException">The <see cref="T:System.IO.TextWriter" /> is closed.</exception>
	/// <exception cref="T:System.IO.IOException">An I/O error occurs.</exception>
	public virtual void Write(char[] buffer)
	{
	}

	/// <summary>Writes a subarray of characters to the text string or stream.</summary>
	/// <param name="buffer">The character array to write data from.</param>
	/// <param name="index">The character position in the buffer at which to start retrieving data.</param>
	/// <param name="count">The number of characters to write.</param>
	/// <exception cref="T:System.ArgumentException">The buffer length minus <paramref name="index" /> is less than <paramref name="count" />.</exception>
	/// <exception cref="T:System.ArgumentNullException">The <paramref name="buffer" /> parameter is <see langword="null" />.</exception>
	/// <exception cref="T:System.ArgumentOutOfRangeException">
	///   <paramref name="index" /> or <paramref name="count" /> is negative.</exception>
	/// <exception cref="T:System.ObjectDisposedException">The <see cref="T:System.IO.TextWriter" /> is closed.</exception>
	/// <exception cref="T:System.IO.IOException">An I/O error occurs.</exception>
	public virtual void Write(char[] buffer, int index, int count)
	{
	}

	/// <summary>Writes a string to the text string or stream.</summary>
	/// <param name="value">The string to write.</param>
	/// <exception cref="T:System.ObjectDisposedException">The <see cref="T:System.IO.TextWriter" /> is closed.</exception>
	/// <exception cref="T:System.IO.IOException">An I/O error occurs.</exception>
	public virtual void Write(string value)
	{
	}

	/// <summary>Writes a line terminator to the text string or stream.</summary>
	/// <exception cref="T:System.ObjectDisposedException">The <see cref="T:System.IO.TextWriter" /> is closed.</exception>
	/// <exception cref="T:System.IO.IOException">An I/O error occurs.</exception>
	public virtual void WriteLine()
	{
	}

	/// <summary>Writes a string followed by a line terminator to the text string or stream.</summary>
	/// <param name="value">The string to write. If <paramref name="value" /> is <see langword="null" />, only the line terminator is written.</param>
	/// <exception cref="T:System.ObjectDisposedException">The <see cref="T:System.IO.TextWriter" /> is closed.</exception>
	/// <exception cref="T:System.IO.IOException">An I/O error occurs.</exception>
	public virtual void WriteLine(string value)
	{
	}

	/// <summary>Writes the text representation of an object by calling the <see langword="ToString" /> method on that object, followed by a line terminator to the text string or stream.</summary>
	/// <param name="value">The object to write. If <paramref name="value" /> is <see langword="null" />, only the line terminator is written.</param>
	/// <exception cref="T:System.ObjectDisposedException">The <see cref="T:System.IO.TextWriter" /> is closed.</exception>
	/// <exception cref="T:System.IO.IOException">An I/O error occurs.</exception>
	public virtual void WriteLine(object value)
	{
	}

	/// <summary>Creates a thread-safe wrapper around the specified <see langword="TextWriter" />.</summary>
	/// <param name="writer">The <see langword="TextWriter" /> to synchronize.</param>
	/// <returns>A thread-safe wrapper.</returns>
	/// <exception cref="T:System.ArgumentNullException">
	///   <paramref name="writer" /> is <see langword="null" />.</exception>
	public static TextWriter Synchronized(TextWriter writer)
	{
		return null;
	}
}
