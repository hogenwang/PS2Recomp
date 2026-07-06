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

// Function: sub_00217C78
// Address: 0x217c78 - 0x217d70
void sub_00217C78_0x217c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217C78_0x217c78");
#endif

    switch (ctx->pc) {
        case 0x217c94u: goto label_217c94;
        case 0x217ce4u: goto label_217ce4;
        case 0x217cf4u: goto label_217cf4;
        case 0x217d44u: goto label_217d44;
        case 0x217d4cu: goto label_217d4c;
        default: break;
    }

    ctx->pc = 0x217c78u;

label_217c78:
    // 0x217c78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x217c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x217c7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x217c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x217c80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x217c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x217c84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x217c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c88: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x217c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x217c8c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x217C8Cu;
    SET_GPR_U32(ctx, 31, 0x217C94u);
    ctx->pc = 0x217C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C8Cu;
    // 0x217c90: 0x24840f48  addiu       $a0, $a0, 0xF48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x217C8Cu, 0x217C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C94u;
label_217c94:
    // 0x217c94: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x217c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217c98: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x217c98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x217c9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x217c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217ca0: 0x24840928  addiu       $a0, $a0, 0x928
    ctx->pc = 0x217ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2344));
    // 0x217ca4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217ca8: 0x8043e52  j           func_10F948
    ctx->pc = 0x217CA8u;
    ctx->pc = 0x217CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217CA8u;
    // 0x217cac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x217CB0u;
    // 0x217cb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x217cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x217cb4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x217cb4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x217cb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x217cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x217cbc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x217cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x217cc0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x217cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x217cc4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x217cc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217cc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x217cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x217ccc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x217cccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217cd0: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x217cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x217cd4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x217cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x217cd8: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x217cd8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x217cdc: 0xc0844dc  jal         func_211370
    ctx->pc = 0x217CDCu;
    SET_GPR_U32(ctx, 31, 0x217CE4u);
    ctx->pc = 0x217CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217CDCu;
    // 0x217ce0: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x217CDCu, 0x217CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217CE4u;
label_217ce4:
    // 0x217ce4: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x217ce4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x217ce8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x217ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217cec: 0xc085f1e  jal         func_217C78
    ctx->pc = 0x217CECu;
    SET_GPR_U32(ctx, 31, 0x217CF4u);
    ctx->pc = 0x217CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217CECu;
    // 0x217cf0: 0x20f8023  subu        $s0, $s0, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217C78u;
    goto label_217c78;
    ctx->pc = 0x217CF4u;
label_217cf4:
    // 0x217cf4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x217cf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217cf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x217cf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217cfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217cfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217d00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x217d00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217d04: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x217d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x217d08: 0x3e00008  jr          $ra
    ctx->pc = 0x217D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217D08u;
        // 0x217d0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217D10u;
    // 0x217d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x217d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x217d14: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x217d14u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x217d18: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x217d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x217d1c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x217d1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217d20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x217d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x217d24: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x217d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x217d28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x217d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x217d2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x217d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x217d30: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x217d30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x217d34: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x217d34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217d38: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x217d38u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x217d3c: 0xc084612  jal         func_211848
    ctx->pc = 0x217D3Cu;
    SET_GPR_U32(ctx, 31, 0x217D44u);
    ctx->pc = 0x217D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D3Cu;
    // 0x217d40: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x217D3Cu, 0x217D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D44u;
label_217d44:
    // 0x217d44: 0xc085f1e  jal         func_217C78
    ctx->pc = 0x217D44u;
    SET_GPR_U32(ctx, 31, 0x217D4Cu);
    ctx->pc = 0x217D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D44u;
    // 0x217d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217C78u;
    goto label_217c78;
    ctx->pc = 0x217D4Cu;
label_217d4c:
    // 0x217d4c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x217d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x217d50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217d50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217d54: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x217d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x217d58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x217d58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217d5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x217d5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217d60: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x217d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x217d64: 0x3e00008  jr          $ra
    ctx->pc = 0x217D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217D64u;
        // 0x217d68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217D6Cu;
    // 0x217d6c: 0x0  nop
    ctx->pc = 0x217d6cu;
    // NOP
    if (ctx->pc == 0x217d6cu) { ctx->pc = 0x217d70u; }
}
