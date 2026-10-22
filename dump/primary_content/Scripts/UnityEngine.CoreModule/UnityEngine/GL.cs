using System;

namespace UnityEngine;

public sealed class GL
{
	public static Matrix4x4 modelview
	{
		set
		{
		}
	}

	public static void Vertex3(float x, float y, float z)
	{
	}

	public static void TexCoord3(float x, float y, float z)
	{
	}

	public static void TexCoord2(float x, float y)
	{
	}

	private static void ImmediateColor(float r, float g, float b, float a)
	{
	}

	public static void Color(Color c)
	{
	}

	private static void SetViewMatrix(Matrix4x4 m)
	{
	}

	public static void PushMatrix()
	{
	}

	public static void PopMatrix()
	{
	}

	public static void LoadOrtho()
	{
	}

	public static void LoadProjectionMatrix(Matrix4x4 mat)
	{
	}

	private static void GLLoadPixelMatrixScript(float left, float right, float bottom, float top)
	{
	}

	public static void LoadPixelMatrix(float left, float right, float bottom, float top)
	{
	}

	private static void GLIssuePluginEvent(IntPtr callback, int eventID)
	{
	}

	public static void IssuePluginEvent(IntPtr callback, int eventID)
	{
	}

	public static void Begin(int mode)
	{
	}

	public static void End()
	{
	}

	private static void GLClear(bool clearDepth, bool clearColor, Color backgroundColor, float depth)
	{
	}

	public static void Clear(bool clearDepth, bool clearColor, Color backgroundColor, float depth)
	{
	}

	public static void Viewport(Rect pixelRect)
	{
	}

	private static void SetViewMatrix_Injected(ref Matrix4x4 m)
	{
	}

	private static void LoadProjectionMatrix_Injected(ref Matrix4x4 mat)
	{
	}

	private static void GLClear_Injected(bool clearDepth, bool clearColor, ref Color backgroundColor, float depth)
	{
	}

	private static void Viewport_Injected(ref Rect pixelRect)
	{
	}
}
