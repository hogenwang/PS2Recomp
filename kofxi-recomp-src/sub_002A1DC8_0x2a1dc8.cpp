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

// Function: sub_002A1DC8
// Address: 0x2a1dc8 - 0x2a1ec0
void sub_002A1DC8_0x2a1dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1DC8_0x2a1dc8");
#endif

    switch (ctx->pc) {
        case 0x2a1e0cu: goto label_2a1e0c;
        case 0x2a1e64u: goto label_2a1e64;
        case 0x2a1e94u: goto label_2a1e94;
        default: break;
    }

    ctx->pc = 0x2a1dc8u;

    // 0x2a1dc8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2a1dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a1dcc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2a1dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2a1dd0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a1dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a1dd4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2a1dd4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1dd8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2a1dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2a1ddc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a1ddcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1de0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2a1de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2a1de4: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2a1de4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1de8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a1de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a1dec: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x2a1decu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1df0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a1df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a1df4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a1df4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1df8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2a1df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2a1dfc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2a1dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1e00: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2a1e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2a1e04: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x2A1E04u;
    SET_GPR_U32(ctx, 31, 0x2A1E0Cu);
    ctx->pc = 0x2A1E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1E04u;
    // 0x2a1e08: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x2A1E04u, 0x2A1E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1E0Cu;
label_2a1e0c:
    // 0x2a1e0c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a1e0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1e10: 0x26820008  addiu       $v0, $s4, 0x8
    ctx->pc = 0x2a1e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2a1e14: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x2a1e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2a1e18: 0x24830002  addiu       $v1, $a0, 0x2
    ctx->pc = 0x2a1e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x2a1e1c: 0x203802a  slt         $s0, $s0, $v1
    ctx->pc = 0x2a1e1cu;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a1e20: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2a1e20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2a1e24: 0x1600001c  bnez        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2A1E24u;
    {
        const bool branch_taken_0x2a1e24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1E24u;
        // 0x2a1e28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1e24) {
            ctx->pc = 0x2A1E98u;
            goto label_2a1e98;
        }
    }
    ctx->pc = 0x2A1E2Cu;
    // 0x2a1e2c: 0x2482fffc  addiu       $v0, $a0, -0x4
    ctx->pc = 0x2a1e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x2a1e30: 0xa2440001  sb          $a0, 0x1($s2)
    ctx->pc = 0x2a1e30u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a1e34: 0x542023  subu        $a0, $v0, $s4
    ctx->pc = 0x2a1e34u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2a1e38: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2a1e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2a1e3c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2a1e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a1e40: 0xa2440003  sb          $a0, 0x3($s2)
    ctx->pc = 0x2a1e40u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a1e44: 0xa2530005  sb          $s3, 0x5($s2)
    ctx->pc = 0x2a1e44u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 19));
    // 0x2a1e48: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2a1e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1e4c: 0xa2430002  sb          $v1, 0x2($s2)
    ctx->pc = 0x2a1e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a1e50: 0x26440006  addiu       $a0, $s2, 0x6
    ctx->pc = 0x2a1e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
    // 0x2a1e54: 0xa2420004  sb          $v0, 0x4($s2)
    ctx->pc = 0x2a1e54u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a1e58: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2a1e58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1e5c: 0xc049c48  jal         func_127120
    ctx->pc = 0x2A1E5Cu;
    SET_GPR_U32(ctx, 31, 0x2A1E64u);
    ctx->pc = 0x2A1E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1E5Cu;
    // 0x2a1e60: 0xa2430000  sb          $v1, 0x0($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2A1E5Cu, 0x2A1E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1E64u;
label_2a1e64:
    // 0x2a1e64: 0x26630006  addiu       $v1, $s3, 0x6
    ctx->pc = 0x2a1e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
    // 0x2a1e68: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2a1e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a1e6c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2a1e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2a1e70: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2a1e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a1e74: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x2a1e74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x2a1e78: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x2a1e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2a1e7c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2a1e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a1e80: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2a1e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1e84: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2a1e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1e88: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2a1e88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a1e8c: 0xc049c48  jal         func_127120
    ctx->pc = 0x2A1E8Cu;
    SET_GPR_U32(ctx, 31, 0x2A1E94u);
    ctx->pc = 0x2A1E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1E8Cu;
    // 0x2a1e90: 0xa0740003  sb          $s4, 0x3($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2A1E8Cu, 0x2A1E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1E94u;
label_2a1e94:
    // 0x2a1e94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a1e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1e98:
    // 0x2a1e98: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2a1e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a1e9c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2a1e9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a1ea0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2a1ea0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a1ea4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2a1ea4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a1ea8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2a1ea8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a1eac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a1eacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a1eb0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a1eb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1eb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a1eb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1EB8u;
        // 0x2a1ebc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1EC0u;
}
