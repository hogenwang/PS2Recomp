#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002957B8
// Address: 0x2957b8 - 0x295820
void sub_002957B8_0x2957b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002957B8_0x2957b8");
#endif

    switch (ctx->pc) {
        case 0x2957e8u: goto label_2957e8;
        default: break;
    }

    ctx->pc = 0x2957b8u;

    // 0x2957b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2957b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2957bc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2957bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2957c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2957c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2957c4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2957c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2957c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2957c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2957cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2957ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2957d0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2957d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2957d4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2957d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2957d8: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x2957D8u;
    {
        const bool branch_taken_0x2957d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2957DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2957D8u;
            // 0x2957dc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2957d8) {
            ctx->pc = 0x295808u;
            goto label_295808;
        }
    }
    ctx->pc = 0x2957E0u;
    // 0x2957e0: 0xc0a558c  jal         func_295630
    ctx->pc = 0x2957E0u;
    SET_GPR_U32(ctx, 31, 0x2957E8u);
    ctx->pc = 0x2957E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2957E0u;
            // 0x2957e4: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295630u;
    if (runtime->hasFunction(0x295630u)) {
        auto targetFn = runtime->lookupFunction(0x295630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2957E8u; }
        if (ctx->pc != 0x2957E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295630_0x295630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2957E8u; }
        if (ctx->pc != 0x2957E8u) { return; }
    }
    ctx->pc = 0x2957E8u;
label_2957e8:
    // 0x2957e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2957e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2957ec: 0x4630003  bgezl       $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2957ECu;
    {
        const bool branch_taken_0x2957ec = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2957ec) {
            ctx->pc = 0x2957F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2957ECu;
            // 0x2957f0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2957FCu;
            goto label_2957fc;
        }
    }
    ctx->pc = 0x2957F4u;
    // 0x2957f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2957F4u;
    {
        const bool branch_taken_0x2957f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2957F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2957F4u;
            // 0x2957f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2957f4) {
            ctx->pc = 0x29580Cu;
            goto label_29580c;
        }
    }
    ctx->pc = 0x2957FCu;
label_2957fc:
    // 0x2957fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2957fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295800: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x295800u;
    {
        const bool branch_taken_0x295800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295800u;
            // 0x295804: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295800) {
            ctx->pc = 0x29580Cu;
            goto label_29580c;
        }
    }
    ctx->pc = 0x295808u;
label_295808:
    // 0x295808: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x295808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29580c:
    // 0x29580c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29580cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x295810: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x295810u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295814: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x295814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295818: 0x3e00008  jr          $ra
    ctx->pc = 0x295818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29581Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295818u;
            // 0x29581c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x295820u;
    ctx->pc = 0x295820u;
}
