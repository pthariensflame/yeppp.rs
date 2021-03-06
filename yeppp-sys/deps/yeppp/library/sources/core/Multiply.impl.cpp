/*
 *                       Yeppp! library implementation
 *                   This file is auto-generated by Peach-Py,
 *        Portable Efficient Assembly Code-generator in Higher-level Python,
 *                  part of the Yeppp! library infrastructure
 * This file is part of Yeppp! library and licensed under the New BSD license.
 * See LICENSE.txt for the full text of the license.
 */

#include <yepBuiltin.h>
#include <yepCore.h>


extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_V8sV8s_V8s_Default(const Yep8s *YEP_RESTRICT xPointer, const Yep8s *YEP_RESTRICT yPointer, Yep8s *YEP_RESTRICT productPointer, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(productPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	while (length-- != 0) {
		const Yep8s x = *xPointer++;
		const Yep8s y = *yPointer++;
		const Yep8s product = x * y;
		*productPointer++ = product;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_V8sV8s_V16s_Default(const Yep8s *YEP_RESTRICT xPointer, const Yep8s *YEP_RESTRICT yPointer, Yep16s *YEP_RESTRICT productPointer, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(productPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(productPointer, sizeof(Yep16s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	while (length-- != 0) {
		const Yep16s x = *xPointer++;
		const Yep16s y = *yPointer++;
		const Yep16s product = x * y;
		*productPointer++ = product;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_V8uV8u_V16u_Default(const Yep8u *YEP_RESTRICT xPointer, const Yep8u *YEP_RESTRICT yPointer, Yep16u *YEP_RESTRICT productPointer, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(productPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(productPointer, sizeof(Yep16u)) != 0) {
		return YepStatusMisalignedPointer;
	}
	while (length-- != 0) {
		const Yep16u x = *xPointer++;
		const Yep16u y = *yPointer++;
		const Yep16u product = x * y;
		*productPointer++ = product;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_V16sV16s_V16s_Default(const Yep16s *YEP_RESTRICT xPointer, const Yep16s *YEP_RESTRICT yPointer, Yep16s *YEP_RESTRICT productPointer, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(xPointer, sizeof(Yep16s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	if YEP_UNLIKELY(yPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(yPointer, sizeof(Yep16s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	if YEP_UNLIKELY(productPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(productPointer, sizeof(Yep16s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	while (length-- != 0) {
		const Yep16s x = *xPointer++;
		const Yep16s y = *yPointer++;
		const Yep16s product = x * y;
		*productPointer++ = product;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_V16sV16s_V32s_Default(const Yep16s *YEP_RESTRICT xPointer, const Yep16s *YEP_RESTRICT yPointer, Yep32s *YEP_RESTRICT productPointer, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(xPointer, sizeof(Yep16s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	if YEP_UNLIKELY(yPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(yPointer, sizeof(Yep16s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	if YEP_UNLIKELY(productPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(productPointer, sizeof(Yep32s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	while (length-- != 0) {
		const Yep32s x = *xPointer++;
		const Yep32s y = *yPointer++;
		const Yep32s product = x * y;
		*productPointer++ = product;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_V16uV16u_V32u_Default(const Yep16u *YEP_RESTRICT xPointer, const Yep16u *YEP_RESTRICT yPointer, Yep32u *YEP_RESTRICT productPointer, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(xPointer, sizeof(Yep16u)) != 0) {
		return YepStatusMisalignedPointer;
	}
	if YEP_UNLIKELY(yPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(yPointer, sizeof(Yep16u)) != 0) {
		return YepStatusMisalignedPointer;
	}
	if YEP_UNLIKELY(productPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(productPointer, sizeof(Yep32u)) != 0) {
		return YepStatusMisalignedPointer;
	}
	while (length-- != 0) {
		const Yep32u x = *xPointer++;
		const Yep32u y = *yPointer++;
		const Yep32u product = x * y;
		*productPointer++ = product;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_V32sV32s_V32s_Default(const Yep32s *YEP_RESTRICT xPointer, const Yep32s *YEP_RESTRICT yPointer, Yep32s *YEP_RESTRICT productPointer, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(xPointer, sizeof(Yep32s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	if YEP_UNLIKELY(yPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(yPointer, sizeof(Yep32s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	if YEP_UNLIKELY(productPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(productPointer, sizeof(Yep32s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	while (length-- != 0) {
		const Yep32s x = *xPointer++;
		const Yep32s y = *yPointer++;
		const Yep32s product = x * y;
		*productPointer++ = product;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_V32sV32s_V64s_Default(const Yep32s *YEP_RESTRICT xPointer, const Yep32s *YEP_RESTRICT yPointer, Yep64s *YEP_RESTRICT productPointer, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(xPointer, sizeof(Yep32s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	if YEP_UNLIKELY(yPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(yPointer, sizeof(Yep32s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	if YEP_UNLIKELY(productPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(productPointer, sizeof(Yep64s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	while (length-- != 0) {
		const Yep64s x = *xPointer++;
		const Yep64s y = *yPointer++;
		const Yep64s product = x * y;
		*productPointer++ = product;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_V32uV32u_V64u_Default(const Yep32u *YEP_RESTRICT xPointer, const Yep32u *YEP_RESTRICT yPointer, Yep64u *YEP_RESTRICT productPointer, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(xPointer, sizeof(Yep32u)) != 0) {
		return YepStatusMisalignedPointer;
	}
	if YEP_UNLIKELY(yPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(yPointer, sizeof(Yep32u)) != 0) {
		return YepStatusMisalignedPointer;
	}
	if YEP_UNLIKELY(productPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(productPointer, sizeof(Yep64u)) != 0) {
		return YepStatusMisalignedPointer;
	}
	while (length-- != 0) {
		const Yep64u x = *xPointer++;
		const Yep64u y = *yPointer++;
		const Yep64u product = x * y;
		*productPointer++ = product;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_V64sV64s_V64s_Default(const Yep64s *YEP_RESTRICT xPointer, const Yep64s *YEP_RESTRICT yPointer, Yep64s *YEP_RESTRICT productPointer, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(xPointer, sizeof(Yep64s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	if YEP_UNLIKELY(yPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(yPointer, sizeof(Yep64s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	if YEP_UNLIKELY(productPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(productPointer, sizeof(Yep64s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	while (length-- != 0) {
		const Yep64s x = *xPointer++;
		const Yep64s y = *yPointer++;
		const Yep64s product = x * y;
		*productPointer++ = product;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_V32fV32f_V32f_Default(const Yep32f *YEP_RESTRICT xPointer, const Yep32f *YEP_RESTRICT yPointer, Yep32f *YEP_RESTRICT productPointer, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(xPointer, sizeof(Yep32f)) != 0) {
		return YepStatusMisalignedPointer;
	}
	if YEP_UNLIKELY(yPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(yPointer, sizeof(Yep32f)) != 0) {
		return YepStatusMisalignedPointer;
	}
	if YEP_UNLIKELY(productPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(productPointer, sizeof(Yep32f)) != 0) {
		return YepStatusMisalignedPointer;
	}
	while (length-- != 0) {
		const Yep32f x = *xPointer++;
		const Yep32f y = *yPointer++;
		const Yep32f product = x * y;
		*productPointer++ = product;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_V64fV64f_V64f_Default(const Yep64f *YEP_RESTRICT xPointer, const Yep64f *YEP_RESTRICT yPointer, Yep64f *YEP_RESTRICT productPointer, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(xPointer, sizeof(Yep64f)) != 0) {
		return YepStatusMisalignedPointer;
	}
	if YEP_UNLIKELY(yPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(yPointer, sizeof(Yep64f)) != 0) {
		return YepStatusMisalignedPointer;
	}
	if YEP_UNLIKELY(productPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(productPointer, sizeof(Yep64f)) != 0) {
		return YepStatusMisalignedPointer;
	}
	while (length-- != 0) {
		const Yep64f x = *xPointer++;
		const Yep64f y = *yPointer++;
		const Yep64f product = x * y;
		*productPointer++ = product;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_V8sS8s_V8s_Default(const Yep8s *YEP_RESTRICT xPointer, Yep8s y, Yep8s *YEP_RESTRICT productPointer, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(productPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	while (length-- != 0) {
		const Yep8s x = *xPointer++;
		const Yep8s product = x * y;
		*productPointer++ = product;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_V8sS8s_V16s_Default(const Yep8s *YEP_RESTRICT xPointer, Yep8s y, Yep16s *YEP_RESTRICT productPointer, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(productPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(productPointer, sizeof(Yep16s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	while (length-- != 0) {
		const Yep16s x = *xPointer++;
		const Yep16s product = x * y;
		*productPointer++ = product;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_V8uS8u_V16u_Default(const Yep8u *YEP_RESTRICT xPointer, Yep8u y, Yep16u *YEP_RESTRICT productPointer, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(productPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(productPointer, sizeof(Yep16u)) != 0) {
		return YepStatusMisalignedPointer;
	}
	while (length-- != 0) {
		const Yep16u x = *xPointer++;
		const Yep16u product = x * y;
		*productPointer++ = product;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_V16sS16s_V16s_Default(const Yep16s *YEP_RESTRICT xPointer, Yep16s y, Yep16s *YEP_RESTRICT productPointer, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(xPointer, sizeof(Yep16s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	if YEP_UNLIKELY(productPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(productPointer, sizeof(Yep16s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	while (length-- != 0) {
		const Yep16s x = *xPointer++;
		const Yep16s product = x * y;
		*productPointer++ = product;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_V16sS16s_V32s_Default(const Yep16s *YEP_RESTRICT xPointer, Yep16s y, Yep32s *YEP_RESTRICT productPointer, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(xPointer, sizeof(Yep16s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	if YEP_UNLIKELY(productPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(productPointer, sizeof(Yep32s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	while (length-- != 0) {
		const Yep32s x = *xPointer++;
		const Yep32s product = x * y;
		*productPointer++ = product;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_V16uS16u_V32u_Default(const Yep16u *YEP_RESTRICT xPointer, Yep16u y, Yep32u *YEP_RESTRICT productPointer, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(xPointer, sizeof(Yep16u)) != 0) {
		return YepStatusMisalignedPointer;
	}
	if YEP_UNLIKELY(productPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(productPointer, sizeof(Yep32u)) != 0) {
		return YepStatusMisalignedPointer;
	}
	while (length-- != 0) {
		const Yep32u x = *xPointer++;
		const Yep32u product = x * y;
		*productPointer++ = product;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_V32sS32s_V32s_Default(const Yep32s *YEP_RESTRICT xPointer, Yep32s y, Yep32s *YEP_RESTRICT productPointer, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(xPointer, sizeof(Yep32s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	if YEP_UNLIKELY(productPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(productPointer, sizeof(Yep32s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	while (length-- != 0) {
		const Yep32s x = *xPointer++;
		const Yep32s product = x * y;
		*productPointer++ = product;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_V32sS32s_V64s_Default(const Yep32s *YEP_RESTRICT xPointer, Yep32s y, Yep64s *YEP_RESTRICT productPointer, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(xPointer, sizeof(Yep32s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	if YEP_UNLIKELY(productPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(productPointer, sizeof(Yep64s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	while (length-- != 0) {
		const Yep64s x = *xPointer++;
		const Yep64s product = x * y;
		*productPointer++ = product;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_V32uS32u_V64u_Default(const Yep32u *YEP_RESTRICT xPointer, Yep32u y, Yep64u *YEP_RESTRICT productPointer, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(xPointer, sizeof(Yep32u)) != 0) {
		return YepStatusMisalignedPointer;
	}
	if YEP_UNLIKELY(productPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(productPointer, sizeof(Yep64u)) != 0) {
		return YepStatusMisalignedPointer;
	}
	while (length-- != 0) {
		const Yep64u x = *xPointer++;
		const Yep64u product = x * y;
		*productPointer++ = product;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_V64sS64s_V64s_Default(const Yep64s *YEP_RESTRICT xPointer, Yep64s y, Yep64s *YEP_RESTRICT productPointer, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(xPointer, sizeof(Yep64s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	if YEP_UNLIKELY(productPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(productPointer, sizeof(Yep64s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	while (length-- != 0) {
		const Yep64s x = *xPointer++;
		const Yep64s product = x * y;
		*productPointer++ = product;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_V32fS32f_V32f_Default(const Yep32f *YEP_RESTRICT xPointer, Yep32f y, Yep32f *YEP_RESTRICT productPointer, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(xPointer, sizeof(Yep32f)) != 0) {
		return YepStatusMisalignedPointer;
	}
	if YEP_UNLIKELY(productPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(productPointer, sizeof(Yep32f)) != 0) {
		return YepStatusMisalignedPointer;
	}
	while (length-- != 0) {
		const Yep32f x = *xPointer++;
		const Yep32f product = x * y;
		*productPointer++ = product;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_V64fS64f_V64f_Default(const Yep64f *YEP_RESTRICT xPointer, Yep64f y, Yep64f *YEP_RESTRICT productPointer, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(xPointer, sizeof(Yep64f)) != 0) {
		return YepStatusMisalignedPointer;
	}
	if YEP_UNLIKELY(productPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(productPointer, sizeof(Yep64f)) != 0) {
		return YepStatusMisalignedPointer;
	}
	while (length-- != 0) {
		const Yep64f x = *xPointer++;
		const Yep64f product = x * y;
		*productPointer++ = product;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_IV8sV8s_IV8s_Default(Yep8s *YEP_RESTRICT xPointer, const Yep8s *YEP_RESTRICT yPointer, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	while (length-- != 0) {
		Yep8s x = *xPointer;
		const Yep8s y = *yPointer++;
		x *= y;
		*xPointer++ = x;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_IV16sV16s_IV16s_Default(Yep16s *YEP_RESTRICT xPointer, const Yep16s *YEP_RESTRICT yPointer, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(xPointer, sizeof(Yep16s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	if YEP_UNLIKELY(yPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(yPointer, sizeof(Yep16s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	while (length-- != 0) {
		Yep16s x = *xPointer;
		const Yep16s y = *yPointer++;
		x *= y;
		*xPointer++ = x;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_IV32sV32s_IV32s_Default(Yep32s *YEP_RESTRICT xPointer, const Yep32s *YEP_RESTRICT yPointer, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(xPointer, sizeof(Yep32s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	if YEP_UNLIKELY(yPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(yPointer, sizeof(Yep32s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	while (length-- != 0) {
		Yep32s x = *xPointer;
		const Yep32s y = *yPointer++;
		x *= y;
		*xPointer++ = x;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_IV64sV64s_IV64s_Default(Yep64s *YEP_RESTRICT xPointer, const Yep64s *YEP_RESTRICT yPointer, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(xPointer, sizeof(Yep64s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	if YEP_UNLIKELY(yPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(yPointer, sizeof(Yep64s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	while (length-- != 0) {
		Yep64s x = *xPointer;
		const Yep64s y = *yPointer++;
		x *= y;
		*xPointer++ = x;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_IV32fV32f_IV32f_Default(Yep32f *YEP_RESTRICT xPointer, const Yep32f *YEP_RESTRICT yPointer, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(xPointer, sizeof(Yep32f)) != 0) {
		return YepStatusMisalignedPointer;
	}
	if YEP_UNLIKELY(yPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(yPointer, sizeof(Yep32f)) != 0) {
		return YepStatusMisalignedPointer;
	}
	while (length-- != 0) {
		Yep32f x = *xPointer;
		const Yep32f y = *yPointer++;
		x *= y;
		*xPointer++ = x;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_IV64fV64f_IV64f_Default(Yep64f *YEP_RESTRICT xPointer, const Yep64f *YEP_RESTRICT yPointer, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(xPointer, sizeof(Yep64f)) != 0) {
		return YepStatusMisalignedPointer;
	}
	if YEP_UNLIKELY(yPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(yPointer, sizeof(Yep64f)) != 0) {
		return YepStatusMisalignedPointer;
	}
	while (length-- != 0) {
		Yep64f x = *xPointer;
		const Yep64f y = *yPointer++;
		x *= y;
		*xPointer++ = x;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_IV8sS8s_IV8s_Default(Yep8s *YEP_RESTRICT xPointer, Yep8s y, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	while (length-- != 0) {
		Yep8s x = *xPointer;
		x *= y;
		*xPointer++ = x;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_IV16sS16s_IV16s_Default(Yep16s *YEP_RESTRICT xPointer, Yep16s y, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(xPointer, sizeof(Yep16s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	while (length-- != 0) {
		Yep16s x = *xPointer;
		x *= y;
		*xPointer++ = x;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_IV32sS32s_IV32s_Default(Yep32s *YEP_RESTRICT xPointer, Yep32s y, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(xPointer, sizeof(Yep32s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	while (length-- != 0) {
		Yep32s x = *xPointer;
		x *= y;
		*xPointer++ = x;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_IV64sS64s_IV64s_Default(Yep64s *YEP_RESTRICT xPointer, Yep64s y, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(xPointer, sizeof(Yep64s)) != 0) {
		return YepStatusMisalignedPointer;
	}
	while (length-- != 0) {
		Yep64s x = *xPointer;
		x *= y;
		*xPointer++ = x;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_IV32fS32f_IV32f_Default(Yep32f *YEP_RESTRICT xPointer, Yep32f y, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(xPointer, sizeof(Yep32f)) != 0) {
		return YepStatusMisalignedPointer;
	}
	while (length-- != 0) {
		Yep32f x = *xPointer;
		x *= y;
		*xPointer++ = x;
	}
	return YepStatusOk;
}

extern "C" YEP_LOCAL_SYMBOL YepStatus _yepCore_Multiply_IV64fS64f_IV64f_Default(Yep64f *YEP_RESTRICT xPointer, Yep64f y, YepSize length) {
	if YEP_UNLIKELY(xPointer == YEP_NULL_POINTER) {
		return YepStatusNullPointer;
	}
	if YEP_UNLIKELY(yepBuiltin_GetPointerMisalignment(xPointer, sizeof(Yep64f)) != 0) {
		return YepStatusMisalignedPointer;
	}
	while (length-- != 0) {
		Yep64f x = *xPointer;
		x *= y;
		*xPointer++ = x;
	}
	return YepStatusOk;
}
