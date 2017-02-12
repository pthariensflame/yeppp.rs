/*
 *                       Yeppp! library implementation
 *                   This file is auto-generated by Peach-Py,
 *        Portable Efficient Assembly Code-generator in Higher-level Python,
 *                  part of the Yeppp! library infrastructure
 * This file is part of Yeppp! library and licensed under the New BSD license.
 * See LICENSE.txt for the full text of the license.
 */

package info.yeppp;

/** @brief	Vector mathematical functions. */
public class Math {
	static {
		Library.load();
	}

	/** @name	Natural logarithm */
	/**@{*/
	/**
	 * @brief	Computes natural logarithm on double precision (64-bit) floating-point elements.
	 * @param[in]	xArray	Input array.
	 * @param[in]	xOffset	Offset of the first element in @a xArray.
	 * @param[out]	yArray	Output array.
	 * @param[in]	yOffset	Offset of the first element in @a yArray.
	 * @param[in]	length	The length of the subarrays to be used in computation.
	 * @throws	NullPointerException	If @a xArray or @a yArray is null.
	 * @throws	MisalignedPointerError	If @a xArray or @a yArray is not naturally aligned.
	 * @throws	InvalidArgumentException	If @a xOffset or @a yOffset is negative.
	 * @throws	NegativeArraySizeException	If @a length is negative.
	 * @throws	IndexOutOfBoundsException	If @a xOffset + @a length exceeds the length of @a xArray or @a yOffset + @a length exceeds the length of @a yArray.
	 * @par	Optimized implementations
	 *     		<table>
	 *     			<tr><th>Architecture</th><th>Target microarchitecture</th><th>Required instruction extensions</th></tr>
	 *     			<tr><td>x86-64</td><td>Intel Nehalem</td><td>SSE, SSE2, SSE4.1</td></tr>
	 *     			<tr><td>x86-64</td><td>Intel Sandy Bridge</td><td>AVX</td></tr>
	 *     			<tr><td>x86-64</td><td>Intel Haswell</td><td>AVX, AVX2, FMA3</td></tr>
	 *     			<tr><td>x86-64</td><td>AMD K10</td><td>SSE, SSE2</td></tr>
	 *     			<tr><td>x86-64</td><td>AMD Bulldozer</td><td>AVX, FMA4, XOP</td></tr>
	 *     			<tr><td>x86-64</td><td>AMD Bobcat</td><td>SSE, SSE2</td></tr>
	 *     		</table>
	 */
	public static native void Log_V64f_V64f(double[] xArray, int xOffset, double[] yArray, int yOffset, int length);
	/**@}*/


	/** @name	Base-e exponent */
	/**@{*/
	/**
	 * @brief	Computes exponent on double precision (64-bit) floating-point elements.
	 * @param[in]	xArray	Input array.
	 * @param[in]	xOffset	Offset of the first element in @a xArray.
	 * @param[out]	yArray	Output array.
	 * @param[in]	yOffset	Offset of the first element in @a yArray.
	 * @param[in]	length	Length of the subarrays to be used in computation.
	 * @throws	NullPointerException	If @a xArray or @a yArray is null.
	 * @throws	MisalignedPointerError	If @a xArray or @a yArray is not naturally aligned.
	 * @throws	InvalidArgumentException	If @a xOffset or @a yOffset is negative.
	 * @throws	NegativeArraySizeException	If @a length is negative.
	 * @throws	IndexOutOfBoundsException	If @a xOffset + @a length exceeds the length of @a xArray or @a yOffset + @a length exceeds the length of @a yArray.
	 * @par	Optimized implementations
	 *     		<table>
	 *     			<tr><th>Architecture</th><th>Target microarchitecture</th><th>Required instruction extensions</th></tr>
	 *     			<tr><td>x86-64</td><td>Intel Nehalem</td><td>SSE, SSE2, SSE4.1</td></tr>
	 *     			<tr><td>x86-64</td><td>Intel Sandy Bridge</td><td>AVX</td></tr>
	 *     			<tr><td>x86-64</td><td>Intel Haswell</td><td>AVX, AVX2, FMA3</td></tr>
	 *     			<tr><td>x86-64</td><td>AMD K10</td><td>CMOV, SSE, SSE2</td></tr>
	 *     			<tr><td>x86-64</td><td>AMD Bulldozer</td><td>AVX, FMA4</td></tr>
	 *     			<tr><td>x86-64</td><td>AMD Bobcat</td><td>CMOV, SSE, SSE2</td></tr>
	 *     		</table>
	 */
	public static native void Exp_V64f_V64f(double[] xArray, int xOffset, double[] yArray, int yOffset, int length);
	/**@}*/


	/** @name	Sine */
	/**@{*/
	/**
	 * @brief	Computes sine on double precision (64-bit) floating-point elements.
	 * @param[in]	xArray	Input array.
	 * @param[in]	xOffset	Offset of the first element in @a xArray.
	 * @param[out]	yArray	Output array.
	 * @param[in]	yOffset	Offset of the first element in @a yArray.
	 * @param[in]	length	The length of the subarrays to be used in computation.
	 * @throws	NullPointerException	If @a xArray or @a yArray is null.
	 * @throws	MisalignedPointerError	If @a xArray or @a yArray is not naturally aligned.
	 * @throws	InvalidArgumentException	If @a xOffset or @a yOffset is negative.
	 * @throws	NegativeArraySizeException	If @a length is negative.
	 * @throws	IndexOutOfBoundsException	If @a xOffset + @a length exceeds the length of @a xArray or @a yOffset + @a length exceeds the length of @a yArray.
	 * @par	Optimized implementations
	 *     		<table>
	 *     			<tr><th>Architecture</th><th>Target microarchitecture</th><th>Required instruction extensions</th></tr>
	 *     			<tr><td>x86-64</td><td>Intel Nehalem</td><td>SSE, SSE2, SSE4.1</td></tr>
	 *     			<tr><td>x86-64</td><td>Intel Sandy Bridge</td><td>AVX</td></tr>
	 *     			<tr><td>x86-64</td><td>Intel Haswell</td><td>AVX, AVX2, FMA3</td></tr>
	 *     			<tr><td>x86-64</td><td>AMD Bulldozer</td><td>AVX, FMA4</td></tr>
	 *     		</table>
	 */
	public static native void Sin_V64f_V64f(double[] xArray, int xOffset, double[] yArray, int yOffset, int length);
	/**@}*/


	/** @name	Cosine */
	/**@{*/
	/**
	 * @brief	Computes cosine on double precision (64-bit) floating-point elements.
	 * @param[in]	xArray	Input array.
	 * @param[in]	xOffset	Offset of the first element in @a xArray.
	 * @param[out]	yArray	Output array.
	 * @param[in]	yOffset	Offset of the first element in @a yArray.
	 * @param[in]	length	The length of the subarrays to be used in computation.
	 * @throws	NullPointerException	If @a xArray or @a yArray is null.
	 * @throws	MisalignedPointerError	If @a xArray or @a yArray is not naturally aligned.
	 * @throws	InvalidArgumentException	If @a xOffset or @a yOffset is negative.
	 * @throws	NegativeArraySizeException	If @a length is negative.
	 * @throws	IndexOutOfBoundsException	If @a xOffset + @a length exceeds the length of @a xArray or @a yOffset + @a length exceeds the length of @a yArray.
	 * @par	Optimized implementations
	 *     		<table>
	 *     			<tr><th>Architecture</th><th>Target microarchitecture</th><th>Required instruction extensions</th></tr>
	 *     			<tr><td>x86-64</td><td>Intel Nehalem</td><td>SSE, SSE2, SSE4.1</td></tr>
	 *     			<tr><td>x86-64</td><td>Intel Sandy Bridge</td><td>AVX</td></tr>
	 *     			<tr><td>x86-64</td><td>Intel Haswell</td><td>AVX, AVX2, FMA3</td></tr>
	 *     			<tr><td>x86-64</td><td>AMD Bulldozer</td><td>AVX, FMA4</td></tr>
	 *     		</table>
	 */
	public static native void Cos_V64f_V64f(double[] xArray, int xOffset, double[] yArray, int yOffset, int length);
	/**@}*/


	/** @name	Tangent */
	/**@{*/
	/**
	 * @brief	Computes tangent on double precision (64-bit) floating-point elements.
	 * @param[in]	xArray	Input array.
	 * @param[in]	xOffset	Offset of the first element in @a xArray.
	 * @param[out]	yArray	Output array.
	 * @param[in]	yOffset	Offset of the first element in @a yArray.
	 * @param[in]	length	The length of the slices of @a xArray and @a yArray to use in computation.
	 * @throws	NullPointerException	If @a xArray or @a yArray is null.
	 * @throws	MisalignedPointerError	If @a xArray or @a yArray is not naturally aligned.
	 * @throws	InvalidArgumentException	If @a xOffset or @a yOffset is negative.
	 * @throws	NegativeArraySizeException	If @a length is negative.
	 * @throws	IndexOutOfBoundsException	If @a xOffset + @a length exceeds the length of @a xArray or @a yOffset + @a length exceeds the length of @a yArray.
	 * @par	Optimized implementations
	 *     		<table>
	 *     			<tr><th>Architecture</th><th>Target microarchitecture</th><th>Required instruction extensions</th></tr>
	 *     			<tr><td>x86-64</td><td>AMD Bulldozer</td><td>AVX, FMA4</td></tr>
	 *     		</table>
	 */
	public static native void Tan_V64f_V64f(double[] xArray, int xOffset, double[] yArray, int yOffset, int length);
	/**@}*/


	/** @name	Polynomial evaluation */
	/**@{*/
	/**
	 * @brief	Evaluates polynomial with single precision (32-bit) floating-point coefficients on an array of single precision (32-bit) floating-point elements.
	 * @param[in]	xArray	Array of elements on which the polynomial will be evaluated.
	 * @param[in]	xOffset	Offset of the first element in @a xArray.
	 * @param[in]	coefArray	Array of polynomial coefficients.
	 * @param[in]	coefOffset	Offset of the first element in @a yArray.
	 * @param[out]	yArray	Array where the result of polynomial evaluation will be stored.
	 * @param[in]	yOffset	Offset of the first element in @a yArray.
	 * @param[in]	coefCount	The length of the slice of @a coef to be used in computation.
	 * @param[in]	length	The length of the slice of @a xArray and @a yArray to use in computation.
	 * @throws	NullPointerException	If @a coefArray, @a xArray or @a yArray is null.
	 * @throws	MisalignedPointerError	If @a coefArray, @a xArray or @a yArray is not naturally aligned.
	 * @throws	InvalidArgumentException	If @a coefOffset, @a xOffset or @a yOffset is negative or @a coefCount is zero.
	 * @throws	NegativeArraySizeException	If @a coefCount or @a length is negative.
	 * @throws	IndexOutOfBoundsException	If @a coefOffset + @a coefCount exceeds the length of @a coefArray, @a xOffset + @a length exceeds the length of @a xArray or @a yOffset + @a length exceeds the length of @a yArray.
	 * @par	Optimized implementations
	 *     		<table>
	 *     			<tr><th>Architecture</th><th>Target microarchitecture</th><th>Required instruction extensions</th></tr>
	 *     			<tr><td>x86-64</td><td>Intel Nehalem</td><td>SSE</td></tr>
	 *     			<tr><td>x86-64</td><td>Intel Sandy Bridge</td><td>AVX</td></tr>
	 *     			<tr><td>x86-64</td><td>Intel Haswell</td><td>SSE, AVX, FMA3</td></tr>
	 *     			<tr><td>x86-64</td><td>Intel Bonnell</td><td>SSE</td></tr>
	 *     			<tr><td>x86-64</td><td>AMD Bulldozer</td><td>AVX, FMA4</td></tr>
	 *     			<tr><td>ARM</td><td>ARM Cortex-A9</td><td>VFP2, NEON</td></tr>
	 *     		</table>
	 */
	public static native void EvaluatePolynomial_V32fV32f_V32f(float[] coefArray, int coefOffset, float[] xArray, int xOffset, float[] yArray, int yOffset, int coefCount, int length);
	/**
	 * @brief	Evaluates polynomial with double precision (64-bit) floating-point coefficients on an array of double precision (64-bit) floating-point elements.
	 * @param[in]	xArray	Array of elements on which the polynomial will be evaluated.
	 * @param[in]	xOffset	Offset of the first element in @a xArray.
	 * @param[in]	coefArray	Array of polynomial coefficients.
	 * @param[in]	coefOffset	Offset of the first element in @a yArray.
	 * @param[out]	yArray	Array where the result of polynomial evaluation will be stored.
	 * @param[in]	yOffset	Offset of the first element in @a yArray.
	 * @param[in]	coefCount	The length of the slice of @a coef to be used in computation.
	 * @param[in]	length	The length of the slice of @a xArray and @a yArray to use in computation.
	 * @throws	NullPointerException	If @a coefArray, @a xArray or @a yArray is null.
	 * @throws	MisalignedPointerError	If @a coefArray, @a xArray or @a yArray is not naturally aligned.
	 * @throws	InvalidArgumentException	If @a coefOffset, @a xOffset or @a yOffset is negative or @a coefCount is zero.
	 * @throws	NegativeArraySizeException	If @a coefCount or @a length is negative.
	 * @throws	IndexOutOfBoundsException	If @a coefOffset + @a coefCount exceeds the length of @a coefArray, @a xOffset + @a length exceeds the length of @a xArray or @a yOffset + @a length exceeds the length of @a yArray.
	 * @par	Optimized implementations
	 *     		<table>
	 *     			<tr><th>Architecture</th><th>Target microarchitecture</th><th>Required instruction extensions</th></tr>
	 *     			<tr><td>x86-64</td><td>Intel Nehalem</td><td>SSE2, SSE3</td></tr>
	 *     			<tr><td>x86-64</td><td>Intel Sandy Bridge</td><td>AVX</td></tr>
	 *     			<tr><td>x86-64</td><td>Intel Haswell</td><td>SSE, AVX, FMA3</td></tr>
	 *     			<tr><td>x86-64</td><td>Intel Bonnell</td><td>SSE, SSE2</td></tr>
	 *     			<tr><td>x86-64</td><td>AMD Bulldozer</td><td>AVX, FMA4</td></tr>
	 *     			<tr><td>ARM</td><td>ARM Cortex-A9</td><td>VFP2, VFPd32</td></tr>
	 *     		</table>
	 */
	public static native void EvaluatePolynomial_V64fV64f_V64f(double[] coefArray, int coefOffset, double[] xArray, int xOffset, double[] yArray, int yOffset, int coefCount, int length);
	/**@}*/


}