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

// Function: sub_00217D70
// Address: 0x217d70 - 0x217f08
void sub_00217D70_0x217d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217D70_0x217d70");
#endif

    switch (ctx->pc) {
        case 0x217d8cu: goto label_217d8c;
        case 0x217d9cu: goto label_217d9c;
        case 0x217dacu: goto label_217dac;
        case 0x217e0cu: goto label_217e0c;
        case 0x217e20u: goto label_217e20;
        case 0x217e34u: goto label_217e34;
        case 0x217e44u: goto label_217e44;
        case 0x217eacu: goto label_217eac;
        case 0x217ec0u: goto label_217ec0;
        case 0x217ed4u: goto label_217ed4;
        case 0x217edcu: goto label_217edc;
        default: break;
    }

    ctx->pc = 0x217d70u;

label_217d70:
    // 0x217d70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x217d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x217d74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x217d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x217d78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x217d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x217d7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x217d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217d80: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x217d80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x217d84: 0xc043e52  jal         func_10F948
    ctx->pc = 0x217D84u;
    SET_GPR_U32(ctx, 31, 0x217D8Cu);
    ctx->pc = 0x217D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D84u;
    // 0x217d88: 0x24840f60  addiu       $a0, $a0, 0xF60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x217D84u, 0x217D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D8Cu;
label_217d8c:
    // 0x217d8c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x217d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217d90: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x217d90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x217d94: 0xc043e52  jal         func_10F948
    ctx->pc = 0x217D94u;
    SET_GPR_U32(ctx, 31, 0x217D9Cu);
    ctx->pc = 0x217D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D94u;
    // 0x217d98: 0x24840928  addiu       $a0, $a0, 0x928 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x217D94u, 0x217D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D9Cu;
label_217d9c:
    // 0x217d9c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x217d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x217da0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x217da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x217da4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x217DA4u;
    SET_GPR_U32(ctx, 31, 0x217DACu);
    ctx->pc = 0x217DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217DA4u;
    // 0x217da8: 0x24840f78  addiu       $a0, $a0, 0xF78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x217DA4u, 0x217DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217DACu;
label_217dac:
    // 0x217dac: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x217dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x217db0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x217db0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x217db4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x217db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217db8: 0x24840f88  addiu       $a0, $a0, 0xF88
    ctx->pc = 0x217db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3976));
    // 0x217dbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217dbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217dc0: 0x8043e52  j           func_10F948
    ctx->pc = 0x217DC0u;
    ctx->pc = 0x217DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217DC0u;
    // 0x217dc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x217DC8u;
    // 0x217dc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x217dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x217dcc: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x217dccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x217dd0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x217dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x217dd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x217dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x217dd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x217dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x217ddc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x217ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x217de0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x217de0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217de4: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x217de4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x217de8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x217de8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217dec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x217decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x217df0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x217df0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217df4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x217df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x217df8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x217df8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217dfc: 0x8cd20000  lw          $s2, 0x0($a2)
    ctx->pc = 0x217dfcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x217e00: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x217e00u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x217e04: 0xc0844dc  jal         func_211370
    ctx->pc = 0x217E04u;
    SET_GPR_U32(ctx, 31, 0x217E0Cu);
    ctx->pc = 0x217E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217E04u;
    // 0x217e08: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x217E04u, 0x217E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E0Cu;
label_217e0c:
    // 0x217e0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x217e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217e10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x217e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217e14: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x217e14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217e18: 0xc0844dc  jal         func_211370
    ctx->pc = 0x217E18u;
    SET_GPR_U32(ctx, 31, 0x217E20u);
    ctx->pc = 0x217E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217E18u;
    // 0x217e1c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x217E18u, 0x217E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E20u;
label_217e20:
    // 0x217e20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x217e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217e24: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x217e24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217e28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x217e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217e2c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x217E2Cu;
    SET_GPR_U32(ctx, 31, 0x217E34u);
    ctx->pc = 0x217E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217E2Cu;
    // 0x217e30: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x217E2Cu, 0x217E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E34u;
label_217e34:
    // 0x217e34: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x217e34u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x217e38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x217e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217e3c: 0xc085f5c  jal         func_217D70
    ctx->pc = 0x217E3Cu;
    SET_GPR_U32(ctx, 31, 0x217E44u);
    ctx->pc = 0x217E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217E3Cu;
    // 0x217e40: 0x24f9023  subu        $s2, $s2, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217D70u;
    goto label_217d70;
    ctx->pc = 0x217E44u;
label_217e44:
    // 0x217e44: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x217e44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217e48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217e48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217e4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x217e4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217e50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x217e50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217e54: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x217e54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x217e58: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x217e58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217e5c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x217e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x217e60: 0x3e00008  jr          $ra
    ctx->pc = 0x217E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217E60u;
        // 0x217e64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217E68u;
    // 0x217e68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x217e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x217e6c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x217e6cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x217e70: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x217e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x217e74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x217e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x217e78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x217e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x217e7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x217e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x217e80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x217e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217e84: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x217e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x217e88: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x217e88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217e8c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x217e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x217e90: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x217e90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217e94: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x217e94u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x217e98: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x217e98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217e9c: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x217e9cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x217ea0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x217ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x217ea4: 0xc084612  jal         func_211848
    ctx->pc = 0x217EA4u;
    SET_GPR_U32(ctx, 31, 0x217EACu);
    ctx->pc = 0x217EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217EA4u;
    // 0x217ea8: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x217EA4u, 0x217EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217EACu;
label_217eac:
    // 0x217eac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217eb0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x217eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217eb4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x217eb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217eb8: 0xc084612  jal         func_211848
    ctx->pc = 0x217EB8u;
    SET_GPR_U32(ctx, 31, 0x217EC0u);
    ctx->pc = 0x217EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217EB8u;
    // 0x217ebc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x217EB8u, 0x217EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217EC0u;
label_217ec0:
    // 0x217ec0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x217ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217ec4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x217ec4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217ec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217ecc: 0xc084612  jal         func_211848
    ctx->pc = 0x217ECCu;
    SET_GPR_U32(ctx, 31, 0x217ED4u);
    ctx->pc = 0x217ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217ECCu;
    // 0x217ed0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x217ECCu, 0x217ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217ED4u;
label_217ed4:
    // 0x217ed4: 0xc085f5c  jal         func_217D70
    ctx->pc = 0x217ED4u;
    SET_GPR_U32(ctx, 31, 0x217EDCu);
    ctx->pc = 0x217ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217ED4u;
    // 0x217ed8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217D70u;
    goto label_217d70;
    ctx->pc = 0x217EDCu;
label_217edc:
    // 0x217edc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x217edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x217ee0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217ee0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217ee4: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x217ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x217ee8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x217ee8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217eec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x217eecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217ef0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x217ef0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x217ef4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x217ef4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217ef8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x217ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x217efc: 0x3e00008  jr          $ra
    ctx->pc = 0x217EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217EFCu;
        // 0x217f00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217F04u;
    // 0x217f04: 0x0  nop
    ctx->pc = 0x217f04u;
    // NOP
    if (ctx->pc == 0x217f04u) { ctx->pc = 0x217f08u; }
}
