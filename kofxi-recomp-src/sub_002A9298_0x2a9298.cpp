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

// Function: sub_002A9298
// Address: 0x2a9298 - 0x2a9330
void sub_002A9298_0x2a9298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9298_0x2a9298");
#endif

    switch (ctx->pc) {
        case 0x2a92d8u: goto label_2a92d8;
        case 0x2a9300u: goto label_2a9300;
        default: break;
    }

    ctx->pc = 0x2a9298u;

    // 0x2a9298: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2a9298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2a929c: 0x39080002  xori        $t0, $t0, 0x2
    ctx->pc = 0x2a929cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)2);
    // 0x2a92a0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2a92a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2a92a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2a92a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a92a8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2a92a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a92ac: 0x24100800  addiu       $s0, $zero, 0x800
    ctx->pc = 0x2a92acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2a92b0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2a92b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2a92b4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2a92b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2a92b8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2a92b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a92bc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2a92bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2a92c0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2a92c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a92c4: 0x8800b  movn        $s0, $zero, $t0
    ctx->pc = 0x2a92c4u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x2a92c8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2a92c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a92cc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2a92ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2a92d0: 0xc0aa588  jal         func_2A9620
    ctx->pc = 0x2A92D0u;
    SET_GPR_U32(ctx, 31, 0x2A92D8u);
    ctx->pc = 0x2A92D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A92D0u;
    // 0x2a92d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9620u, 0x2A92D0u, 0x2A92D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A92D8u;
label_2a92d8:
    // 0x2a92d8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A92D8u;
    {
        const bool branch_taken_0x2a92d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A92DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A92D8u;
        // 0x2a92dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a92d8) {
            ctx->pc = 0x2A9308u;
            goto label_2a9308;
        }
    }
    ctx->pc = 0x2A92E0u;
    // 0x2a92e0: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2a92e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2a92e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a92e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a92e8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2a92e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a92ec: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x2a92ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a92f0: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x2a92f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a92f4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2a92f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a92f8: 0xc0a80fc  jal         func_2A03F0
    ctx->pc = 0x2A92F8u;
    SET_GPR_U32(ctx, 31, 0x2A9300u);
    ctx->pc = 0x2A92FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A92F8u;
    // 0x2a92fc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A03F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A03F0u, 0x2A92F8u, 0x2A9300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9300u;
label_2a9300:
    // 0x2a9300: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2a9300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9304: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x2a9304u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_2a9308:
    // 0x2a9308: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a9308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a930c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2a930cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a9310: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2a9310u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a9314: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2a9314u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a9318: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2a9318u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a931c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2a931cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a9320: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2a9320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9324: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9324u;
        // 0x2a9328: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A932Cu;
    // 0x2a932c: 0x0  nop
    ctx->pc = 0x2a932cu;
    // NOP
}
