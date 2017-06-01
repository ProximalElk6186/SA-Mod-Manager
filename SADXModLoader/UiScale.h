#pragma once

namespace uiscale
{
	enum FillMode : Uint8
	{
		Stretch = 0,
		Fit     = 1,
		Fill    = 2
	};

	extern FillMode bg_fill;
	extern FillMode fmv_fill;

	void Initialize();
	void UpdateScaleParameters();
	void SetupHudScale();
	void SetupBackgroundScale();
	void SetupFmvScale();
}
