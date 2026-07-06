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

// Function: sub_001B14B0
// Address: 0x1b14b0 - 0x1b1540
void sub_001B14B0_0x1b14b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B14B0_0x1b14b0");
#endif

    switch (ctx->pc) {
        case 0x1b14ecu: goto label_1b14ec;
        case 0x1b150cu: goto label_1b150c;
        case 0x1b1514u: goto label_1b1514;
        default: break;
    }

    ctx->pc = 0x1b14b0u;

    // 0x1b14b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b14b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b14b4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b14b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b14b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b14b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b14bc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1b14bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1b14c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b14c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b14c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b14c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1b14c8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b14c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b14cc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1b14ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1b14d0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1b14d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b14d4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1b14d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1b14d8: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1b14d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b14dc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1b14dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1b14e0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b14e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b14e4: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1B14E4u;
    SET_GPR_U32(ctx, 31, 0x1B14ECu);
    ctx->pc = 0x1B14E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B14E4u;
    // 0x1b14e8: 0x120a82d  daddu       $s5, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1AB0u, 0x1B14E4u, 0x1B14ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B14ECu;
label_1b14ec:
    // 0x1b14ec: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x1b14ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b14f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b14f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b14f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b14f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b14f8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b14f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b14fc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1b14fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1500: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1b1500u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1504: 0xc06c550  jal         func_1B1540
    ctx->pc = 0x1B1504u;
    SET_GPR_U32(ctx, 31, 0x1B150Cu);
    ctx->pc = 0x1B1508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1504u;
    // 0x1b1508: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1540u, 0x1B1504u, 0x1B150Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B150Cu;
label_1b150c:
    // 0x1b150c: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1B150Cu;
    SET_GPR_U32(ctx, 31, 0x1B1514u);
    ctx->pc = 0x1B1510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B150Cu;
    // 0x1b1510: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1AC8u, 0x1B150Cu, 0x1B1514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1514u;
label_1b1514:
    // 0x1b1514: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1b1514u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b1518: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b151c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b151cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1520: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b1520u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1524: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1b1524u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b1528: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1b1528u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b152c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1b152cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b1530: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b1530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1534: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1534u;
        // 0x1b1538: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B153Cu;
    // 0x1b153c: 0x0  nop
    ctx->pc = 0x1b153cu;
    // NOP
}
