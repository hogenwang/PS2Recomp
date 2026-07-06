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

// Function: sub_001188B8
// Address: 0x1188b8 - 0x118938
void sub_001188B8_0x1188b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001188B8_0x1188b8");
#endif

    switch (ctx->pc) {
        case 0x1188e8u: goto label_1188e8;
        case 0x118900u: goto label_118900;
        case 0x118910u: goto label_118910;
        default: break;
    }

    ctx->pc = 0x1188b8u;

    // 0x1188b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1188b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1188bc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1188bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1188c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1188c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1188c4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1188c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1188c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1188c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1188cc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1188ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1188d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1188d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1188d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1188d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1188d8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1188d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1188dc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1188dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1188e0: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1188E0u;
    SET_GPR_U32(ctx, 31, 0x1188E8u);
    ctx->pc = 0x1188E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1188E0u;
    // 0x1188e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x1188E0u, 0x1188E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1188E8u;
label_1188e8:
    // 0x1188e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1188e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1188ec: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1188ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1188f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1188f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1188f4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1188f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1188f8: 0xc0461ea  jal         func_1187A8
    ctx->pc = 0x1188F8u;
    SET_GPR_U32(ctx, 31, 0x118900u);
    ctx->pc = 0x1188FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1188F8u;
    // 0x1188fc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A8u, 0x1188F8u, 0x118900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118900u;
label_118900:
    // 0x118900: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x118900u;
    {
        const bool branch_taken_0x118900 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x118904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118900u;
        // 0x118904: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118900) {
            ctx->pc = 0x118910u;
            goto label_118910;
        }
    }
    ctx->pc = 0x118908u;
    // 0x118908: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x118908u;
    SET_GPR_U32(ctx, 31, 0x118910u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x118908u, 0x118910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118910u;
label_118910:
    // 0x118910: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x118910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118914: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x118914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x118918: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x118918u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11891c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11891cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118920: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x118920u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118924: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x118924u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118928: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11892c: 0x3e00008  jr          $ra
    ctx->pc = 0x11892Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11892Cu;
        // 0x118930: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11892Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118934u;
    // 0x118934: 0x0  nop
    ctx->pc = 0x118934u;
    // NOP
}
