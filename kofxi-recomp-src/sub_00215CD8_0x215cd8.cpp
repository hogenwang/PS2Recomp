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

// Function: sub_00215CD8
// Address: 0x215cd8 - 0x215dd0
void sub_00215CD8_0x215cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215CD8_0x215cd8");
#endif

    switch (ctx->pc) {
        case 0x215cf4u: goto label_215cf4;
        case 0x215d44u: goto label_215d44;
        case 0x215d54u: goto label_215d54;
        case 0x215da4u: goto label_215da4;
        case 0x215dacu: goto label_215dac;
        default: break;
    }

    ctx->pc = 0x215cd8u;

label_215cd8:
    // 0x215cd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x215cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x215cdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215ce0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x215ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x215ce4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x215ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ce8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x215ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x215cec: 0xc043e52  jal         func_10F948
    ctx->pc = 0x215CECu;
    SET_GPR_U32(ctx, 31, 0x215CF4u);
    ctx->pc = 0x215CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215CECu;
    // 0x215cf0: 0x24840bd8  addiu       $a0, $a0, 0xBD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x215CECu, 0x215CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215CF4u;
label_215cf4:
    // 0x215cf4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x215cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x215cf8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x215cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x215cfc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x215cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215d00: 0x24840b58  addiu       $a0, $a0, 0xB58
    ctx->pc = 0x215d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2904));
    // 0x215d04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215d04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215d08: 0x8043e52  j           func_10F948
    ctx->pc = 0x215D08u;
    ctx->pc = 0x215D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215D08u;
    // 0x215d0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x215D10u;
    // 0x215d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x215d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x215d14: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x215d14u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x215d18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x215d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x215d1c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x215d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x215d20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x215d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x215d24: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x215d24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215d28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215d2c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x215d2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215d30: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x215d30u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x215d34: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x215d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x215d38: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x215d38u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x215d3c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x215D3Cu;
    SET_GPR_U32(ctx, 31, 0x215D44u);
    ctx->pc = 0x215D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215D3Cu;
    // 0x215d40: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x215D3Cu, 0x215D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215D44u;
label_215d44:
    // 0x215d44: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x215d44u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x215d48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x215d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215d4c: 0xc085736  jal         func_215CD8
    ctx->pc = 0x215D4Cu;
    SET_GPR_U32(ctx, 31, 0x215D54u);
    ctx->pc = 0x215D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215D4Cu;
    // 0x215d50: 0x20f8023  subu        $s0, $s0, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215CD8u;
    goto label_215cd8;
    ctx->pc = 0x215D54u;
label_215d54:
    // 0x215d54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x215d54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215d58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x215d58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215d5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215d5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215d60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x215d60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215d64: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x215d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x215d68: 0x3e00008  jr          $ra
    ctx->pc = 0x215D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D68u;
        // 0x215d6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215D70u;
    // 0x215d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x215d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x215d74: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x215d74u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x215d78: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x215d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x215d7c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x215d7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215d80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x215d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x215d84: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x215d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x215d88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x215d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x215d8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215d90: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x215d90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x215d94: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x215d94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215d98: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x215d98u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x215d9c: 0xc084612  jal         func_211848
    ctx->pc = 0x215D9Cu;
    SET_GPR_U32(ctx, 31, 0x215DA4u);
    ctx->pc = 0x215DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215D9Cu;
    // 0x215da0: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x215D9Cu, 0x215DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215DA4u;
label_215da4:
    // 0x215da4: 0xc085736  jal         func_215CD8
    ctx->pc = 0x215DA4u;
    SET_GPR_U32(ctx, 31, 0x215DACu);
    ctx->pc = 0x215DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215DA4u;
    // 0x215da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215CD8u;
    goto label_215cd8;
    ctx->pc = 0x215DACu;
label_215dac:
    // 0x215dac: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x215dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x215db0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215db0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215db4: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x215db4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x215db8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x215db8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215dbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x215dbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215dc0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x215dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x215dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x215DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215DC4u;
        // 0x215dc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215DCCu;
    // 0x215dcc: 0x0  nop
    ctx->pc = 0x215dccu;
    // NOP
    if (ctx->pc == 0x215dccu) { ctx->pc = 0x215dd0u; }
}
