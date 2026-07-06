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

// Function: sub_001B23C0
// Address: 0x1b23c0 - 0x1b2440
void sub_001B23C0_0x1b23c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B23C0_0x1b23c0");
#endif

    switch (ctx->pc) {
        case 0x1b240cu: goto label_1b240c;
        case 0x1b2420u: goto label_1b2420;
        default: break;
    }

    ctx->pc = 0x1b23c0u;

    // 0x1b23c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b23c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b23c4: 0x3c07000f  lui         $a3, 0xF
    ctx->pc = 0x1b23c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15 << 16));
    // 0x1b23c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b23c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b23cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b23ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b23d0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1b23d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1b23d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b23d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b23d8: 0x806c910  j           func_1B2440
    ctx->pc = 0x1B23D8u;
    ctx->pc = 0x1B23DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B23D8u;
    // 0x1b23dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2440u;
    sub_001B2440_0x1b2440(rdram, ctx, runtime); return;
    ctx->pc = 0x1B23E0u;
    // 0x1b23e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b23e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b23e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b23e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b23e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b23e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b23ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b23ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b23f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b23f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b23f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b23f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b23f8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b23f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b23fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b23fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b2400: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b2400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b2404: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B2404u;
    SET_GPR_U32(ctx, 31, 0x1B240Cu);
    ctx->pc = 0x1B2408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2404u;
    // 0x1b2408: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1B2404u, 0x1B240Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B240Cu;
label_1b240c:
    // 0x1b240c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b240cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2410: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b2410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2414: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b2414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2418: 0xc06c910  jal         func_1B2440
    ctx->pc = 0x1B2418u;
    SET_GPR_U32(ctx, 31, 0x1B2420u);
    ctx->pc = 0x1B241Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2418u;
    // 0x1b241c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2440u, 0x1B2418u, 0x1B2420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2420u;
label_1b2420:
    // 0x1b2420: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2424: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2424u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2428: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b2428u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b242c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b242cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b2430: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b2430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2434: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1B2434u;
    ctx->pc = 0x1B2438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2434u;
    // 0x1b2438: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1B243Cu;
    // 0x1b243c: 0x0  nop
    ctx->pc = 0x1b243cu;
    // NOP
}
