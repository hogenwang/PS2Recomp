#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EC3E8
// Address: 0x1ec3e8 - 0x1ec480
void sub_001EC3E8_0x1ec3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC3E8_0x1ec3e8");
#endif

    switch (ctx->pc) {
        case 0x1ec40cu: goto label_1ec40c;
        case 0x1ec424u: goto label_1ec424;
        case 0x1ec43cu: goto label_1ec43c;
        case 0x1ec460u: goto label_1ec460;
        default: break;
    }

    ctx->pc = 0x1ec3e8u;

    // 0x1ec3e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ec3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ec3ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ec3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ec3f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ec3f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec3f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ec3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ec3f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ec3f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec3fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ec3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ec400: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ec400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ec404: 0xc07b120  jal         func_1EC480
    ctx->pc = 0x1EC404u;
    SET_GPR_U32(ctx, 31, 0x1EC40Cu);
    ctx->pc = 0x1EC408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC404u;
            // 0x1ec408: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC480u;
    if (runtime->hasFunction(0x1EC480u)) {
        auto targetFn = runtime->lookupFunction(0x1EC480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC40Cu; }
        if (ctx->pc != 0x1EC40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EC480_0x1ec480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC40Cu; }
        if (ctx->pc != 0x1EC40Cu) { return; }
    }
    ctx->pc = 0x1EC40Cu;
label_1ec40c:
    // 0x1ec40c: 0x26040002  addiu       $a0, $s0, 0x2
    ctx->pc = 0x1ec40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1ec410: 0x2625fffe  addiu       $a1, $s1, -0x2
    ctx->pc = 0x1ec410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x1ec414: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EC414u;
    {
        const bool branch_taken_0x1ec414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC414u;
            // 0x1ec418: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec414) {
            ctx->pc = 0x1EC44Cu;
            goto label_1ec44c;
        }
    }
    ctx->pc = 0x1EC41Cu;
    // 0x1ec41c: 0xc07b120  jal         func_1EC480
    ctx->pc = 0x1EC41Cu;
    SET_GPR_U32(ctx, 31, 0x1EC424u);
    ctx->pc = 0x1EC480u;
    if (runtime->hasFunction(0x1EC480u)) {
        auto targetFn = runtime->lookupFunction(0x1EC480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC424u; }
        if (ctx->pc != 0x1EC424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EC480_0x1ec480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC424u; }
        if (ctx->pc != 0x1EC424u) { return; }
    }
    ctx->pc = 0x1EC424u;
label_1ec424:
    // 0x1ec424: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1EC424u;
    {
        const bool branch_taken_0x1ec424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec424) {
            ctx->pc = 0x1EC428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC424u;
            // 0x1ec428: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC464u;
            goto label_1ec464;
        }
    }
    ctx->pc = 0x1EC42Cu;
    // 0x1ec42c: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1ec42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ec430: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x1ec430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1ec434: 0xc07b120  jal         func_1EC480
    ctx->pc = 0x1EC434u;
    SET_GPR_U32(ctx, 31, 0x1EC43Cu);
    ctx->pc = 0x1EC438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC434u;
            // 0x1ec438: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC480u;
    if (runtime->hasFunction(0x1EC480u)) {
        auto targetFn = runtime->lookupFunction(0x1EC480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC43Cu; }
        if (ctx->pc != 0x1EC43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EC480_0x1ec480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC43Cu; }
        if (ctx->pc != 0x1EC43Cu) { return; }
    }
    ctx->pc = 0x1EC43Cu;
label_1ec43c:
    // 0x1ec43c: 0x26040003  addiu       $a0, $s0, 0x3
    ctx->pc = 0x1ec43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x1ec440: 0x2625fffd  addiu       $a1, $s1, -0x3
    ctx->pc = 0x1ec440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967293));
    // 0x1ec444: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC444u;
    {
        const bool branch_taken_0x1ec444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC444u;
            // 0x1ec448: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec444) {
            ctx->pc = 0x1EC458u;
            goto label_1ec458;
        }
    }
    ctx->pc = 0x1EC44Cu;
label_1ec44c:
    // 0x1ec44c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EC44Cu;
    {
        const bool branch_taken_0x1ec44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC44Cu;
            // 0x1ec450: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec44c) {
            ctx->pc = 0x1EC464u;
            goto label_1ec464;
        }
    }
    ctx->pc = 0x1EC454u;
    // 0x1ec454: 0x0  nop
    ctx->pc = 0x1ec454u;
    // NOP
label_1ec458:
    // 0x1ec458: 0xc07b120  jal         func_1EC480
    ctx->pc = 0x1EC458u;
    SET_GPR_U32(ctx, 31, 0x1EC460u);
    ctx->pc = 0x1EC480u;
    if (runtime->hasFunction(0x1EC480u)) {
        auto targetFn = runtime->lookupFunction(0x1EC480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC460u; }
        if (ctx->pc != 0x1EC460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EC480_0x1ec480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC460u; }
        if (ctx->pc != 0x1EC460u) { return; }
    }
    ctx->pc = 0x1EC460u;
label_1ec460:
    // 0x1ec460: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ec460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ec464:
    // 0x1ec464: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ec464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec468: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ec468u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ec46c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ec46cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec470: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ec470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec474: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC474u;
            // 0x1ec478: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EC47Cu;
    // 0x1ec47c: 0x0  nop
    ctx->pc = 0x1ec47cu;
    // NOP
    ctx->pc = 0x1ec480u;
}
