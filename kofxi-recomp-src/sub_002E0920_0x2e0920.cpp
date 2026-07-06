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

// Function: sub_002E0920
// Address: 0x2e0920 - 0x2e09a8
void sub_002E0920_0x2e0920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0920_0x2e0920");
#endif

    switch (ctx->pc) {
        case 0x2e0950u: goto label_2e0950;
        case 0x2e0968u: goto label_2e0968;
        case 0x2e0980u: goto label_2e0980;
        default: break;
    }

    ctx->pc = 0x2e0920u;

    // 0x2e0920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e0920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e0924: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2e0924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2e0928: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2e0928u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e092c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e092cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e0930: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e0930u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0934: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2e0934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0938: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2e0938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e093c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2e093cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0940: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2e0940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2e0944: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2e0944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2e0948: 0xc0b7fba  jal         func_2DFEE8
    ctx->pc = 0x2E0948u;
    SET_GPR_U32(ctx, 31, 0x2E0950u);
    ctx->pc = 0x2E094Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0948u;
    // 0x2e094c: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEE8u, 0x2E0948u, 0x2E0950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0950u;
label_2e0950:
    // 0x2e0950: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e0950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0954: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e0954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0958: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0958u;
    {
        const bool branch_taken_0x2e0958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0958u;
        // 0x2e095c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0958) {
            ctx->pc = 0x2E0970u;
            goto label_2e0970;
        }
    }
    ctx->pc = 0x2E0960u;
    // 0x2e0960: 0xc0b80be  jal         func_2E02F8
    ctx->pc = 0x2E0960u;
    SET_GPR_U32(ctx, 31, 0x2E0968u);
    ctx->pc = 0x2E0964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0960u;
    // 0x2e0964: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E02F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E02F8u, 0x2E0960u, 0x2E0968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0968u;
label_2e0968:
    // 0x2e0968: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0968u;
    {
        const bool branch_taken_0x2e0968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0968) {
            ctx->pc = 0x2E0978u;
            goto label_2e0978;
        }
    }
    ctx->pc = 0x2E0970u;
label_2e0970:
    // 0x2e0970: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E0970u;
    {
        const bool branch_taken_0x2e0970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0970u;
        // 0x2e0974: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0970) {
            ctx->pc = 0x2E098Cu;
            goto label_2e098c;
        }
    }
    ctx->pc = 0x2E0978u;
label_2e0978:
    // 0x2e0978: 0xc0b80ec  jal         func_2E03B0
    ctx->pc = 0x2E0978u;
    SET_GPR_U32(ctx, 31, 0x2E0980u);
    ctx->pc = 0x2E097Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0978u;
    // 0x2e097c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E03B0u, 0x2E0978u, 0x2E0980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0980u;
label_2e0980:
    // 0x2e0980: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e0980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e0984: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x2e0984u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2e0988: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2e0988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2e098c:
    // 0x2e098c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e098cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0990: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2e0990u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e0994: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e0994u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0998: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2e0998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e099c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E099Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E09A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E099Cu;
        // 0x2e09a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E099Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E09A4u;
    // 0x2e09a4: 0x0  nop
    ctx->pc = 0x2e09a4u;
    // NOP
    if (ctx->pc == 0x2e09a4u) { ctx->pc = 0x2e09a8u; }
}
