#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00274A10
// Address: 0x274a10 - 0x274af0
void sub_00274A10_0x274a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274A10_0x274a10");
#endif

    switch (ctx->pc) {
        case 0x274a4cu: goto label_274a4c;
        case 0x274a70u: goto label_274a70;
        case 0x274a9cu: goto label_274a9c;
        case 0x274aa4u: goto label_274aa4;
        case 0x274ac4u: goto label_274ac4;
        case 0x274adcu: goto label_274adc;
        default: break;
    }

    ctx->pc = 0x274a10u;

    // 0x274a10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x274a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x274a14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x274a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x274a18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x274a18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274a1c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x274a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x274a20: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x274a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x274a24: 0x24634a6c  addiu       $v1, $v1, 0x4A6C
    ctx->pc = 0x274a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19052));
    // 0x274a28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x274a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x274a2c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x274A2Cu;
    {
        const bool branch_taken_0x274a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274a2c) {
            ctx->pc = 0x274A4Cu;
            goto label_274a4c;
        }
    }
    ctx->pc = 0x274A34u;
    // 0x274a34: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x274a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x274a38: 0x24844a80  addiu       $a0, $a0, 0x4A80
    ctx->pc = 0x274a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19072));
    // 0x274a3c: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x274a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x274a40: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x274a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x274a44: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x274A44u;
    SET_GPR_U32(ctx, 31, 0x274A4Cu);
    ctx->pc = 0x274A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274A44u;
    // 0x274a48: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x274A44u, 0x274A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274A4Cu;
label_274a4c:
    // 0x274a4c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x274A4Cu;
    {
        const bool branch_taken_0x274a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274a4c) {
            ctx->pc = 0x274A80u;
            goto label_274a80;
        }
    }
    ctx->pc = 0x274A54u;
    // 0x274a54: 0xfefcca5a  sd          $gp, -0x35A6($s7)
    ctx->pc = 0x274a54u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 4294953562), GPR_U64(ctx, 28));
    // 0x274a58: 0x8d888435  lw          $t0, -0x7BCB($t4)
    ctx->pc = 0x274a58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294935605)));
    // 0x274a5c: 0x10d7820  add         $t7, $t0, $t5
    ctx->pc = 0x274a5cu;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
    // 0x274a60: 0x84e3677b  lh          $v1, 0x677B($a3)
    ctx->pc = 0x274a60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 26491)));
    // 0x274a64: 0x24c4820  add         $t1, $s2, $t4
    ctx->pc = 0x274a64u;
    {     int32_t rs_val = GPR_S32(ctx, 18);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x274a68: 0xc67803b  jal         func_19E00EC
    ctx->pc = 0x274A68u;
    SET_GPR_U32(ctx, 31, 0x274A70u);
    ctx->pc = 0x19E00ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E00ECu, 0x274A68u, 0x274A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274A70u;
label_274a70:
    // 0x274a70: 0xfda6dcc8  sd          $a2, -0x2338($t5)
    ctx->pc = 0x274a70u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 4294958280), GPR_U64(ctx, 6));
    // 0x274a74: 0x971e2684  lhu         $fp, 0x2684($t8)
    ctx->pc = 0x274a74u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 9860)));
    // 0x274a78: 0xfda6dcc4  sd          $a2, -0x233C($t5)
    ctx->pc = 0x274a78u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 4294958276), GPR_U64(ctx, 6));
    // 0x274a7c: 0x0  nop
    ctx->pc = 0x274a7cu;
    // NOP
label_274a80:
    // 0x274a80: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x274a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x274a84: 0x85e27796  lh          $v0, 0x7796($t7)
    ctx->pc = 0x274a84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 30614)));
    // 0x274a88: 0xa04333fc  sb          $v1, 0x33FC($v0)
    ctx->pc = 0x274a88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 13308), (uint8_t)GPR_U32(ctx, 3));
    // 0x274a8c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x274A8Cu;
    {
        const bool branch_taken_0x274a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274a8c) {
            ctx->pc = 0x274ABCu;
            goto label_274abc;
        }
    }
    ctx->pc = 0x274A94u;
    // 0x274a94: 0xc984dea  jal         func_26137A8
    ctx->pc = 0x274A94u;
    SET_GPR_U32(ctx, 31, 0x274A9Cu);
    ctx->pc = 0x274A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274A94u;
    // 0x274a98: 0xdf044f47  ld          $a0, 0x4F47($t8) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 24), 20295)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26137A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26137A8u, 0x274A94u, 0x274A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274A9Cu;
label_274a9c:
    // 0x274a9c: 0xca21af1  jal         func_2886BC4
    ctx->pc = 0x274A9Cu;
    SET_GPR_U32(ctx, 31, 0x274AA4u);
    ctx->pc = 0x274AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274A9Cu;
    // 0x274aa0: 0x1ae5020  add         $t2, $t5, $t6 (Delay Slot)
    {     int32_t rs_val = GPR_S32(ctx, 13);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2886BC4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2886BC4u, 0x274A9Cu, 0x274AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274AA4u;
label_274aa4:
    // 0x274aa4: 0x26b345e8  addiu       $s3, $s5, 0x45E8
    ctx->pc = 0x274aa4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 17896));
    // 0x274aa8: 0x85186363  lh          $t8, 0x6363($t0)
    ctx->pc = 0x274aa8u;
    SET_GPR_S32(ctx, 24, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 25443)));
    // 0x274aac: 0xf8ccd6ad  sqc2        $vf12, -0x2953($a2)
    ctx->pc = 0x274aacu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 4294956717), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x274ab0: 0x971e2685  lhu         $fp, 0x2685($t8)
    ctx->pc = 0x274ab0u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 9861)));
    // 0x274ab4: 0xf8ccd6a1  sqc2        $vf12, -0x295F($a2)
    ctx->pc = 0x274ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 4294956705), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x274ab8: 0x0  nop
    ctx->pc = 0x274ab8u;
    // NOP
label_274abc:
    // 0x274abc: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x274abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x274ac0: 0x24424aac  addiu       $v0, $v0, 0x4AAC
    ctx->pc = 0x274ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19116));
label_274ac4:
    // 0x274ac4: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x274ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x274ac8: 0x24844a8c  addiu       $a0, $a0, 0x4A8C
    ctx->pc = 0x274ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19084));
    // 0x274acc: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x274accu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x274ad0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x274ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x274ad4: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x274AD4u;
    SET_GPR_U32(ctx, 31, 0x274ADCu);
    ctx->pc = 0x274AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274AD4u;
    // 0x274ad8: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x274AD4u, 0x274ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274ADCu;
label_274adc:
    // 0x274adc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274ae0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x274ae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274ae4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x274ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x274ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x274AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274AE8u;
        // 0x274aec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274AF0u;
}
