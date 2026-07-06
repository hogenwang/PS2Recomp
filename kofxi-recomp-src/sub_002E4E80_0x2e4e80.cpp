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

// Function: sub_002E4E80
// Address: 0x2e4e80 - 0x2e4f68
void sub_002E4E80_0x2e4e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4E80_0x2e4e80");
#endif

    switch (ctx->pc) {
        case 0x2e4ed8u: goto label_2e4ed8;
        case 0x2e4f10u: goto label_2e4f10;
        case 0x2e4f24u: goto label_2e4f24;
        default: break;
    }

    ctx->pc = 0x2e4e80u;

    // 0x2e4e80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e4e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e4e84: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2e4e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2e4e88: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2e4e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2e4e8c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e4e8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4e90: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2e4e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2e4e94: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x2e4e94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4e98: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e4e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e4e9c: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x2e4e9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4ea0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2e4ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2e4ea4: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2e4ea4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4ea8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2e4ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2e4eac: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2e4eacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4eb0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2e4eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2e4eb4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2e4eb4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4eb8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2e4eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2e4ebc: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2e4ebcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4ec0: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2e4ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2e4ec4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2e4ec4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4ec8: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2e4ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x2e4ecc: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2e4eccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4ed0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e4ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e4ed4: 0x0  nop
    ctx->pc = 0x2e4ed4u;
    // NOP
label_2e4ed8:
    // 0x2e4ed8: 0x2a020065  slti        $v0, $s0, 0x65
    ctx->pc = 0x2e4ed8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x2e4edc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E4EDCu;
    {
        const bool branch_taken_0x2e4edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4EDCu;
        // 0x2e4ee0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4edc) {
            ctx->pc = 0x2E4F30u;
            goto label_2e4f30;
        }
    }
    ctx->pc = 0x2E4EE4u;
    // 0x2e4ee4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2e4ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e4ee8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2e4ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4eec: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2e4eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4ef0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2e4ef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4ef4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2e4ef4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4ef8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2e4ef8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4efc: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2e4efcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4f00: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x2e4f00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4f04: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x2e4f04u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4f08: 0xc04434c  jal         func_110D30
    ctx->pc = 0x2E4F08u;
    SET_GPR_U32(ctx, 31, 0x2E4F10u);
    ctx->pc = 0x2E4F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4F08u;
    // 0x2e4f0c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x2E4F08u, 0x2E4F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4F10u;
label_2e4f10:
    // 0x2e4f10: 0x24042710  addiu       $a0, $zero, 0x2710
    ctx->pc = 0x2e4f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x2e4f14: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E4F14u;
    {
        const bool branch_taken_0x2e4f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4F14u;
        // 0x2e4f18: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4f14) {
            ctx->pc = 0x2E4F30u;
            goto label_2e4f30;
        }
    }
    ctx->pc = 0x2E4F1Cu;
    // 0x2e4f1c: 0xc043736  jal         func_10DCD8
    ctx->pc = 0x2E4F1Cu;
    SET_GPR_U32(ctx, 31, 0x2E4F24u);
    ctx->pc = 0x10DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DCD8u, 0x2E4F1Cu, 0x2E4F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4F24u;
label_2e4f24:
    // 0x2e4f24: 0x441ffec  bgez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2E4F24u;
    {
        const bool branch_taken_0x2e4f24 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2E4F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4F24u;
        // 0x2e4f28: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4f24) {
            ctx->pc = 0x2E4ED8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e4ed8;
        }
    }
    ctx->pc = 0x2E4F2Cu;
    // 0x2e4f2c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e4f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e4f30:
    // 0x2e4f30: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e4f30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4f34: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2e4f34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4f38: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2e4f38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e4f3c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e4f3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4f40: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2e4f40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e4f44: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2e4f44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4f48: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2e4f48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e4f4c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2e4f4cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e4f50: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2e4f50u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e4f54: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2e4f54u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e4f58: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2e4f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e4f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4F5Cu;
        // 0x2e4f60: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4F64u;
    // 0x2e4f64: 0x0  nop
    ctx->pc = 0x2e4f64u;
    // NOP
}
