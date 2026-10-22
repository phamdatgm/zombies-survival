using System;
using System.Collections.Generic;
using UnityEngine.Rendering;
using UnityEngine.Scripting;

namespace UnityEngine;

public class Material : Object
{
	public Shader shader
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public Color color
	{
		set
		{
		}
	}

	public Texture mainTexture
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public Vector2 mainTextureOffset
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	public Vector2 mainTextureScale
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	public int renderQueue
	{
		set
		{
		}
	}

	public string[] shaderKeywords
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	private static void CreateWithShader(Material self, Shader shader)
	{
	}

	private static void CreateWithMaterial(Material self, Material source)
	{
	}

	private static void CreateWithString(Material self)
	{
	}

	public Material(Shader shader)
	{
	}

	[RequiredByNativeCode]
	public Material(Material source)
	{
	}

	[Obsolete("Creating materials from shader source string is no longer supported. Use Shader assets instead.", false)]
	public Material(string contents)
	{
	}

	private int GetFirstPropertyNameIdByAttribute(ShaderPropertyFlags attributeFlag)
	{
		return 0;
	}

	public bool HasProperty(int nameID)
	{
		return false;
	}

	public bool HasProperty(string name)
	{
		return false;
	}

	public void EnableKeyword(string keyword)
	{
	}

	public void DisableKeyword(string keyword)
	{
	}

	private string GetTagImpl(string tag, bool currentSubShaderOnly, string defaultValue)
	{
		return null;
	}

	public string GetTag(string tag, bool searchFallbacks)
	{
		return null;
	}

	public bool SetPass(int pass)
	{
		return false;
	}

	public void CopyPropertiesFromMaterial(Material mat)
	{
	}

	private string[] GetShaderKeywords()
	{
		return null;
	}

	private void SetShaderKeywords(string[] names)
	{
	}

	public int ComputeCRC()
	{
		return 0;
	}

	private void SetFloatImpl(int name, float value)
	{
	}

	private void SetColorImpl(int name, Color value)
	{
	}

	private void SetTextureImpl(int name, Texture value)
	{
	}

	private float GetFloatImpl(int name)
	{
		return 0f;
	}

	private Color GetColorImpl(int name)
	{
		return default;
	}

	private Texture GetTextureImpl(int name)
	{
		return null;
	}

	private void SetFloatArrayImpl(int name, float[] values, int count)
	{
	}

	private void SetVectorArrayImpl(int name, Vector4[] values, int count)
	{
	}

	private Vector4 GetTextureScaleAndOffsetImpl(int name)
	{
		return default;
	}

	private void SetTextureOffsetImpl(int name, Vector2 offset)
	{
	}

	private void SetTextureScaleImpl(int name, Vector2 scale)
	{
	}

	private void SetFloatArray(int name, float[] values, int count)
	{
	}

	private void SetVectorArray(int name, Vector4[] values, int count)
	{
	}

	public void SetInt(string name, int value)
	{
	}

	public void SetFloat(string name, float value)
	{
	}

	public void SetFloat(int nameID, float value)
	{
	}

	public void SetColor(string name, Color value)
	{
	}

	public void SetColor(int nameID, Color value)
	{
	}

	public void SetVector(string name, Vector4 value)
	{
	}

	public void SetTexture(string name, Texture value)
	{
	}

	public void SetTexture(int nameID, Texture value)
	{
	}

	public void SetFloatArray(string name, List<float> values)
	{
	}

	public void SetVectorArray(string name, List<Vector4> values)
	{
	}

	public int GetInt(string name)
	{
		return 0;
	}

	public float GetFloat(int nameID)
	{
		return 0f;
	}

	public Color GetColor(string name)
	{
		return default;
	}

	public Texture GetTexture(string name)
	{
		return null;
	}

	public Texture GetTexture(int nameID)
	{
		return null;
	}

	public void SetTextureOffset(string name, Vector2 value)
	{
	}

	public void SetTextureOffset(int nameID, Vector2 value)
	{
	}

	public void SetTextureScale(string name, Vector2 value)
	{
	}

	public void SetTextureScale(int nameID, Vector2 value)
	{
	}

	public Vector2 GetTextureOffset(string name)
	{
		return default;
	}

	public Vector2 GetTextureOffset(int nameID)
	{
		return default;
	}

	public Vector2 GetTextureScale(string name)
	{
		return default;
	}

	public Vector2 GetTextureScale(int nameID)
	{
		return default;
	}

	private void SetColorImpl_Injected(int name, ref Color value)
	{
	}

	private void GetColorImpl_Injected(int name, out Color ret)
	{
		ret = default;
	}

	private void GetTextureScaleAndOffsetImpl_Injected(int name, out Vector4 ret)
	{
		ret = default;
	}

	private void SetTextureOffsetImpl_Injected(int name, ref Vector2 offset)
	{
	}

	private void SetTextureScaleImpl_Injected(int name, ref Vector2 scale)
	{
	}
}
