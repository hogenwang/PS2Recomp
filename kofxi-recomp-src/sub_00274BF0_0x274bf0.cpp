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

// Function: sub_00274BF0
// Address: 0x274bf0 - 0x274cd0
void sub_00274BF0_0x274bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274BF0_0x274bf0");
#endif

    switch (ctx->pc) {
        case 0x274c2cu: goto label_274c2c;
        case 0x274cbcu: goto label_274cbc;
        default: break;
    }

    ctx->pc = 0x274bf0u;

    // 0x274bf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x274bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x274bf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x274bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x274bf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x274bf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274bfc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x274bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x274c00: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x274c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x274c04: 0x24634c4c  addiu       $v1, $v1, 0x4C4C
    ctx->pc = 0x274c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19532));
    // 0x274c08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x274c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x274c0c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x274C0Cu;
    {
        const bool branch_taken_0x274c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274c0c) {
            ctx->pc = 0x274C2Cu;
            goto label_274c2c;
        }
    }
    ctx->pc = 0x274C14u;
    // 0x274c14: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x274c14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x274c18: 0x24844c60  addiu       $a0, $a0, 0x4C60
    ctx->pc = 0x274c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19552));
    // 0x274c1c: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x274c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x274c20: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x274c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x274c24: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x274C24u;
    SET_GPR_U32(ctx, 31, 0x274C2Cu);
    ctx->pc = 0x274C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274C24u;
    // 0x274c28: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x274C24u, 0x274C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274C2Cu;
label_274c2c:
    // 0x274c2c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x274C2Cu;
    {
        const bool branch_taken_0x274c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274c2c) {
            ctx->pc = 0x274C60u;
            goto label_274c60;
        }
    }
    ctx->pc = 0x274C34u;
    // 0x274c34: 0x87dfe66b  lh          $ra, -0x1995($fp)
    ctx->pc = 0x274c34u;
    SET_GPR_S32(ctx, 31, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294960747)));
    // 0x274c38: 0x25b5c3f0  addiu       $s5, $t5, -0x3C10
    ctx->pc = 0x274c38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 13), 4294951920));
    // 0x274c3c: 0x848020  add         $s0, $a0, $a0
    ctx->pc = 0x274c3cu;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
    // 0x274c40: 0x26f1bf20  addiu       $s1, $s7, -0x40E0
    ctx->pc = 0x274c40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4294950688));
    // 0x274c44: 0xff4ded3a  sd          $t5, -0x12C6($k0)
    ctx->pc = 0x274c44u;
    WRITE64(ADD32(GPR_U32(ctx, 26), 4294962490), GPR_U64(ctx, 13));
    // 0x274c48: 0x274cec18  addiu       $t4, $k0, -0x13E8
    ctx->pc = 0x274c48u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 26), 4294962200));
    // 0x274c4c: 0x0  nop
    ctx->pc = 0x274c4cu;
    // NOP
    // 0x274c50: 0x7c51a0de  sq          $s1, -0x5F22($v0)
    ctx->pc = 0x274c50u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4294942942), GPR_VEC(ctx, 17));
    // 0x274c54: 0x971e2718  lhu         $fp, 0x2718($t8)
    ctx->pc = 0x274c54u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 10008)));
    // 0x274c58: 0x7c51a0d2  sq          $s1, -0x5F2E($v0)
    ctx->pc = 0x274c58u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4294942930), GPR_VEC(ctx, 17));
    // 0x274c5c: 0x0  nop
    ctx->pc = 0x274c5cu;
    // NOP
label_274c60:
    // 0x274c60: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x274c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x274c64: 0xfa053816  sqc2        $vf5, 0x3816($s0)
    ctx->pc = 0x274c64u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 14358), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x274c68: 0xa04333fd  sb          $v1, 0x33FD($v0)
    ctx->pc = 0x274c68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 13309), (uint8_t)GPR_U32(ctx, 3));
    // 0x274c6c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x274C6Cu;
    {
        const bool branch_taken_0x274c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274c6c) {
            ctx->pc = 0x274C9Cu;
            goto label_274c9c;
        }
    }
    ctx->pc = 0x274C74u;
    // 0x274c74: 0xdfc92267  ld          $t1, 0x2267($fp)
    ctx->pc = 0x274c74u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 30), 8807)));
    // 0x274c78: 0x25783130  addiu       $t8, $t3, 0x3130
    ctx->pc = 0x274c78u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 11), 12592));
    // 0x274c7c: 0xfeff9bea  sd          $ra, -0x6416($s7)
    ctx->pc = 0x274c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 4294941674), GPR_U64(ctx, 31));
    // 0x274c80: 0x8494dbcb  lh          $s4, -0x2435($a0)
    ctx->pc = 0x274c80u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294958027)));
    // 0x274c84: 0x870d890b  lh          $t5, -0x76F5($t8)
    ctx->pc = 0x274c84u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 4294936843)));
    // 0x274c88: 0x85b32ce3  lh          $s3, 0x2CE3($t5)
    ctx->pc = 0x274c88u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 11491)));
    // 0x274c8c: 0x7ed0a15c  sq          $s0, -0x5EA4($s6)
    ctx->pc = 0x274c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 4294943068), GPR_VEC(ctx, 16));
    // 0x274c90: 0x971e2719  lhu         $fp, 0x2719($t8)
    ctx->pc = 0x274c90u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 10009)));
    // 0x274c94: 0x7ed0a150  sq          $s0, -0x5EB0($s6)
    ctx->pc = 0x274c94u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 4294943056), GPR_VEC(ctx, 16));
    // 0x274c98: 0x0  nop
    ctx->pc = 0x274c98u;
    // NOP
label_274c9c:
    // 0x274c9c: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x274c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x274ca0: 0x24424c8c  addiu       $v0, $v0, 0x4C8C
    ctx->pc = 0x274ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19596));
    // 0x274ca4: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x274ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x274ca8: 0x24844c6c  addiu       $a0, $a0, 0x4C6C
    ctx->pc = 0x274ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19564));
    // 0x274cac: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x274cacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x274cb0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x274cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x274cb4: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x274CB4u;
    SET_GPR_U32(ctx, 31, 0x274CBCu);
    ctx->pc = 0x274CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274CB4u;
    // 0x274cb8: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x274CB4u, 0x274CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274CBCu;
label_274cbc:
    // 0x274cbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274cc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x274cc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274cc4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x274cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x274cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x274CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274CC8u;
        // 0x274ccc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274CD0u;
}
