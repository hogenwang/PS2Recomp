#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A37C8
// Address: 0x2a37c8 - 0x2a3828
void sub_002A37C8_0x2a37c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A37C8_0x2a37c8");
#endif

    switch (ctx->pc) {
        case 0x2a37e4u: goto label_2a37e4;
        case 0x2a37f8u: goto label_2a37f8;
        case 0x2a380cu: goto label_2a380c;
        default: break;
    }

    ctx->pc = 0x2a37c8u;

    // 0x2a37c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a37c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a37cc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2a37ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a37d0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a37d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a37d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a37d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a37d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a37d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a37dc: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2A37DCu;
    SET_GPR_U32(ctx, 31, 0x2A37E4u);
    ctx->pc = 0x2A37E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A37DCu;
            // 0x2a37e0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A37E4u; }
        if (ctx->pc != 0x2A37E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A37E4u; }
        if (ctx->pc != 0x2A37E4u) { return; }
    }
    ctx->pc = 0x2A37E4u;
label_2a37e4:
    // 0x2a37e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a37e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a37e8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A37E8u;
    {
        const bool branch_taken_0x2a37e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A37ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A37E8u;
            // 0x2a37ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a37e8) {
            ctx->pc = 0x2A3810u;
            goto label_2a3810;
        }
    }
    ctx->pc = 0x2A37F0u;
    // 0x2a37f0: 0xc0a8a3e  jal         func_2A28F8
    ctx->pc = 0x2A37F0u;
    SET_GPR_U32(ctx, 31, 0x2A37F8u);
    ctx->pc = 0x2A37F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A37F0u;
            // 0x2a37f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A28F8u;
    if (runtime->hasFunction(0x2A28F8u)) {
        auto targetFn = runtime->lookupFunction(0x2A28F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A37F8u; }
        if (ctx->pc != 0x2A37F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A28F8_0x2a28f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A37F8u; }
        if (ctx->pc != 0x2A37F8u) { return; }
    }
    ctx->pc = 0x2A37F8u;
label_2a37f8:
    // 0x2a37f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a37f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a37fc: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A37FCu;
    {
        const bool branch_taken_0x2a37fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A37FCu;
            // 0x2a3800: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a37fc) {
            ctx->pc = 0x2A3810u;
            goto label_2a3810;
        }
    }
    ctx->pc = 0x2A3804u;
    // 0x2a3804: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2A3804u;
    SET_GPR_U32(ctx, 31, 0x2A380Cu);
    ctx->pc = 0x2A3808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3804u;
            // 0x2a3808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A380Cu; }
        if (ctx->pc != 0x2A380Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A380Cu; }
        if (ctx->pc != 0x2A380Cu) { return; }
    }
    ctx->pc = 0x2A380Cu;
label_2a380c:
    // 0x2a380c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a380cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a3810:
    // 0x2a3810: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a3810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3814: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a3814u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3818: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a3818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a381c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A381Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A381Cu;
            // 0x2a3820: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A3824u;
    // 0x2a3824: 0x0  nop
    ctx->pc = 0x2a3824u;
    // NOP
    ctx->pc = 0x2a3828u;
}
