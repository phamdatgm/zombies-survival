Shader "Adverty/AdUnlitShader" {
	Properties {
		[NoScaleOffset] _BaseMap ("Texture", 2D) = "white" {}
		_BaseColor ("Color", Vector) = (1,1,1,1)
		[HideInInspector] _StencilWriteMaskID ("Stencil Write Mask ID", Float) = 0
		[HideInInspector] _WatermarkTex ("_WatermarkTex (RGB)", 2D) = "white" {}
		[HideInInspector] _WatermarkIsVisible ("Watermark is Visible", Float) = 1
		[HideInInspector] _WatermarkUvSize ("Watermark UV size", Vector) = (0,0,0,0)
		[HideInInspector] _FadeTexture ("_FadeTex (RGB)", 2D) = "white" {}
		[HideInInspector] _TransitionProgress ("Transition Progress", Float) = 0
		[HideInInspector] _FadeTexUVFactor ("_FadeTextureUVFactor", Float) = 0
		[HideInInspector] _MainTexUVFactor ("_MainTextureUVFactor", Float) = 0
	}
	//DummyShaderTextExporter
	SubShader{
		Tags { "RenderType" = "Opaque" }
		LOD 200

		Pass
		{
			HLSLPROGRAM
			#pragma vertex vert
			#pragma fragment frag

			float4x4 unity_ObjectToWorld;
			float4x4 unity_MatrixVP;

			struct Vertex_Stage_Input
			{
				float4 pos : POSITION;
			};

			struct Vertex_Stage_Output
			{
				float4 pos : SV_POSITION;
			};

			Vertex_Stage_Output vert(Vertex_Stage_Input input)
			{
				Vertex_Stage_Output output;
				output.pos = mul(unity_MatrixVP, mul(unity_ObjectToWorld, input.pos));
				return output;
			}

			float4 frag(Vertex_Stage_Output input) : SV_TARGET
			{
				return float4(1.0, 1.0, 1.0, 1.0); // RGBA
			}

			ENDHLSL
		}
	}
}