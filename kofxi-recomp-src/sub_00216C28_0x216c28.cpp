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

// Function: sub_00216C28
// Address: 0x216c28 - 0x216dc0
void sub_00216C28_0x216c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216C28_0x216c28");
#endif

    switch (ctx->pc) {
        case 0x216c44u: goto label_216c44;
        case 0x216c54u: goto label_216c54;
        case 0x216c64u: goto label_216c64;
        case 0x216cc4u: goto label_216cc4;
        case 0x216cd8u: goto label_216cd8;
        case 0x216cecu: goto label_216cec;
        case 0x216cfcu: goto label_216cfc;
        case 0x216d64u: goto label_216d64;
        case 0x216d78u: goto label_216d78;
        case 0x216d8cu: goto label_216d8c;
        case 0x216d94u: goto label_216d94;
        default: break;
    }

    ctx->pc = 0x216c28u;

label_216c28:
    // 0x216c28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x216c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x216c2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x216c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x216c30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x216c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x216c34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x216c34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216c38: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x216c38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x216c3c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x216C3Cu;
    SET_GPR_U32(ctx, 31, 0x216C44u);
    ctx->pc = 0x216C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216C3Cu;
    // 0x216c40: 0x24840dd8  addiu       $a0, $a0, 0xDD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x216C3Cu, 0x216C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216C44u;
label_216c44:
    // 0x216c44: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x216c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x216c48: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x216c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x216c4c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x216C4Cu;
    SET_GPR_U32(ctx, 31, 0x216C54u);
    ctx->pc = 0x216C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216C4Cu;
    // 0x216c50: 0x24840858  addiu       $a0, $a0, 0x858 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x216C4Cu, 0x216C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216C54u;
label_216c54:
    // 0x216c54: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x216c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x216c58: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x216c58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x216c5c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x216C5Cu;
    SET_GPR_U32(ctx, 31, 0x216C64u);
    ctx->pc = 0x216C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216C5Cu;
    // 0x216c60: 0x24840df8  addiu       $a0, $a0, 0xDF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x216C5Cu, 0x216C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216C64u;
label_216c64:
    // 0x216c64: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x216c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x216c68: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x216c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x216c6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x216c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x216c70: 0x24840e08  addiu       $a0, $a0, 0xE08
    ctx->pc = 0x216c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3592));
    // 0x216c74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x216c74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216c78: 0x8043e52  j           func_10F948
    ctx->pc = 0x216C78u;
    ctx->pc = 0x216C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216C78u;
    // 0x216c7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x216C80u;
    // 0x216c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x216c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x216c84: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x216c84u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x216c88: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x216c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x216c8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x216c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x216c90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x216c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x216c94: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x216c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x216c98: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x216c98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216c9c: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x216c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x216ca0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x216ca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216ca4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x216ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x216ca8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x216ca8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216cac: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x216cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x216cb0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x216cb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216cb4: 0x8cd20000  lw          $s2, 0x0($a2)
    ctx->pc = 0x216cb4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x216cb8: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x216cb8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x216cbc: 0xc0844dc  jal         func_211370
    ctx->pc = 0x216CBCu;
    SET_GPR_U32(ctx, 31, 0x216CC4u);
    ctx->pc = 0x216CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216CBCu;
    // 0x216cc0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x216CBCu, 0x216CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216CC4u;
label_216cc4:
    // 0x216cc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x216cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216cc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x216cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216ccc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x216cccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216cd0: 0xc0844dc  jal         func_211370
    ctx->pc = 0x216CD0u;
    SET_GPR_U32(ctx, 31, 0x216CD8u);
    ctx->pc = 0x216CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216CD0u;
    // 0x216cd4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x216CD0u, 0x216CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216CD8u;
label_216cd8:
    // 0x216cd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x216cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216cdc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x216cdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216ce0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x216ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216ce4: 0xc0844dc  jal         func_211370
    ctx->pc = 0x216CE4u;
    SET_GPR_U32(ctx, 31, 0x216CECu);
    ctx->pc = 0x216CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216CE4u;
    // 0x216ce8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x216CE4u, 0x216CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216CECu;
label_216cec:
    // 0x216cec: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x216cecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x216cf0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x216cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216cf4: 0xc085b0a  jal         func_216C28
    ctx->pc = 0x216CF4u;
    SET_GPR_U32(ctx, 31, 0x216CFCu);
    ctx->pc = 0x216CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216CF4u;
    // 0x216cf8: 0x24f9023  subu        $s2, $s2, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216C28u;
    goto label_216c28;
    ctx->pc = 0x216CFCu;
label_216cfc:
    // 0x216cfc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x216cfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216d00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x216d00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216d04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x216d04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x216d08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x216d08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216d0c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x216d0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x216d10: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x216d10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216d14: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x216d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x216d18: 0x3e00008  jr          $ra
    ctx->pc = 0x216D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216D18u;
        // 0x216d1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216D20u;
    // 0x216d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x216d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x216d24: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x216d24u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x216d28: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x216d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x216d2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x216d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x216d30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x216d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x216d34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x216d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x216d38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x216d38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216d3c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x216d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x216d40: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x216d40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216d44: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x216d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x216d48: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x216d48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216d4c: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x216d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x216d50: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x216d50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216d54: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x216d54u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x216d58: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x216d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x216d5c: 0xc084612  jal         func_211848
    ctx->pc = 0x216D5Cu;
    SET_GPR_U32(ctx, 31, 0x216D64u);
    ctx->pc = 0x216D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216D5Cu;
    // 0x216d60: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x216D5Cu, 0x216D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216D64u;
label_216d64:
    // 0x216d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x216d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216d68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x216d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216d6c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x216d6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216d70: 0xc084612  jal         func_211848
    ctx->pc = 0x216D70u;
    SET_GPR_U32(ctx, 31, 0x216D78u);
    ctx->pc = 0x216D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216D70u;
    // 0x216d74: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x216D70u, 0x216D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216D78u;
label_216d78:
    // 0x216d78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x216d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216d7c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x216d7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216d80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x216d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216d84: 0xc084612  jal         func_211848
    ctx->pc = 0x216D84u;
    SET_GPR_U32(ctx, 31, 0x216D8Cu);
    ctx->pc = 0x216D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216D84u;
    // 0x216d88: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x216D84u, 0x216D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216D8Cu;
label_216d8c:
    // 0x216d8c: 0xc085b0a  jal         func_216C28
    ctx->pc = 0x216D8Cu;
    SET_GPR_U32(ctx, 31, 0x216D94u);
    ctx->pc = 0x216D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216D8Cu;
    // 0x216d90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216C28u;
    goto label_216c28;
    ctx->pc = 0x216D94u;
label_216d94:
    // 0x216d94: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x216d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x216d98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x216d98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216d9c: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x216d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x216da0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x216da0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x216da4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x216da4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216da8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x216da8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x216dac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x216dacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216db0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x216db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x216db4: 0x3e00008  jr          $ra
    ctx->pc = 0x216DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216DB4u;
        // 0x216db8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216DBCu;
    // 0x216dbc: 0x0  nop
    ctx->pc = 0x216dbcu;
    // NOP
    if (ctx->pc == 0x216dbcu) { ctx->pc = 0x216dc0u; }
}
